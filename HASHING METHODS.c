// HASHING METHODS
#include<stdio.h>
#define TSIZE 100
int primecheck(long long int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==0){
        return 1;
    }
    else{
        return 0;
    }
}

int Nearestprime(long long int N)
{
    int n=N-1;
    while(!primecheck(n)){
        n=n-1;
    }
    return n;
}

int CountDigits(long long int N){
    int c=0;
    while(N!=0){
        c+=1;
        N=N/10;
    }
    return c;
}

void DivisionHashFunc(long long int N,int arr[]){
    int x1,key_pos;
    x1=Nearestprime(TSIZE);
    key_pos=N%x1;
    arr[key_pos]=N;
    printf("\n\n%d ==> Key Position of %d {USING DIVISION HASH METHOD}",key_pos,N);
}

void MidSquareMethod(long long N,int arr[]){
    int count,digits,x2;
    long long x1;
    count=CountDigits(N);
    digits=(count-1)/2;
    x1=(N*N)/pow(10,digits);
    x2=x1%TSIZE;
    printf("\n\n%d {USING MID SQUARE METHOD}",x2);
}

void FoldingMethod(long long int N,int arr[]){
    int count,digis,sum=0;
    count=CountDigits(TSIZE);
    while(N!=0){
        sum+=N%count;
        N=N/pow(10,count);
    }
    printf("\n\n%d  {USING FOLDING METHOD}",sum%TSIZE);
}

int main()
{
    int arr[TSIZE];
    long long int N;
    printf("\nEnter The Element to Be Insterted");
    scanf("%lld",&N);
    DivisionHashFunc(N,arr);
    MidSquareMethod(N,arr);
    FoldingMethod(N,arr);
    return 0;
}
