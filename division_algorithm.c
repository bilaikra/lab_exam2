#include <stdio.h>
void division_algorithm(int dividend,int divisor,int quotient,int remainder){
    int Q = dividend;
    int M = divisor;
    int A = 0;
    int n = sizeof(Q);
    while (n>0){
        A=A<<1;
        Q=Q<<1;
        A=A-M;
        if(A<0){
            Q = Q|1;
            A=A+M;
        }
        else {
            Q=Q&0;
        }
        n--;
}
quotient = Q;
remainder = A;
}
int main() {
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    division_algorithm(dividend, divisor,quotient, remainder);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
