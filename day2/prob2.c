#include<stdio.h>
int findFactorial(int n){
    //base code
    if(n<=1){
        return 1;
    }
    //task code
    return(n*findFactorial(n-1));
}//recursive call
int main(){
int n,fac;
printf("Enter a number:\n");
scanf("%d",&n);
fac=findFactorial(n);
printf("Factorial of %d is:%d",n,fac);
    return 0;
}
