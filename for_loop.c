#include<stdio.h>
int main(){
    int sum,r,c;
    for(r=1;r<=3;r++){
        for(c=1;c<= 2;c++){
            sum=r+c;
            printf("r= %d c=%d and the sum is %d",r,c,sum);
            printf("\n");
        }
    }
    return 0;
}
