#include<stdio.h>

int binomial(int x){
       int sum;
       if(x==0){
           return 1;
       }
       else{
           sum=x * binomial(x-1);
       }
       return sum;
}

int nCr(int n,int r){
     if(n<r){
        printf("Invalid inputs.Try again");
        return 0;
     }
     else{
        if(r==1){
            return 1;
        }
        else if(n==r){
            return 1;
        }
        else{
            int sum1=binomial(n-1)/(binomial(n-1-r)*binomial(r));
            int sum2=binomial(n-1)/(binomial((n-1)-(r-1))*binomial(r-1));

            int total=sum1 +sum2;
            return total;
        }
     }


}
int main(){
    int n,r;

    printf("Enter a value for n:");
    scanf("%d",&n);
    printf("Enter a value for r:");
    scanf("%d",&r);

    printf("\nValue of %dC%d = %d",n,r,nCr(n,r));

    return 0;



}
