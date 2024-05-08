#include <stdio.h>
#include <stdlib.h>
int main() {
    int limite=0;
    int numFib=1;
    int numFibAnt=0;
    int aux=0;
    printf("Fibonacci:\n");
    while (limite<1000000000)
    {
        if (numFib==1)
        {
            numFibAnt=1;
            numFib++;
        }else{
            aux=numFibAnt;
            numFibAnt=numFib;
            numFib=aux+numFibAnt;
        }
        limite++;       
    }  
    return 0;
}