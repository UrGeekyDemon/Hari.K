#include <stdio.h>
struct Polynomial{
    int Coeff;
    int Expo;
}P1[100];
int main()
{
    int n,i;
    printf("enter the num of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("enter the exponent of term %d:",1+i);
         scanf("%d",&P1[i].Expo);
         printf("enter the corresponding Coeff:");
         scanf("%d",&P1[i].Coeff);}
    printf("the given polynomial is\n");
    for(i=0;i<n;i++){
        if(i==n-1)
            printf("%dx^%d",P1[i].Coeff,P1[i].Expo);
        else
        printf("%dx^%d+",P1[i].Coeff,P1[i].Expo);}
}

