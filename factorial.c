#include<stdio.h>
int main(){
    int num,i,fact;
    printf("Enter an integer");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num){
        fact=fact*i;
        i++;

    }
    printf("factorial is %d",fact);
return 0;
}

