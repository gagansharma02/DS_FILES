// Write a program to find mean and median of five numbers using function

#include<stdio.h>

int mean(int n[],int n1){
    int sum=0;
    for (int i=0;i<n1;i++){
        sum+=n[i];
    }
    return sum/n1;
}
int median(int n[],int n1){
    int temp,c1,i,j;
    for(int i=0;i<n1;i++){
        for(j=i+1;j<n1;j++){
            temp=n[i+1];
            if (temp>n[i]){
                temp=n[i];
            }
        }
        if(temp>n[i]){
            c1=temp;
            temp=n[i];
            n[i]=c1;
        }
    }
    if(n1%2==0){
        return n[n1/2];
    }
    else{
        return ((n[n1/2]+n[n1/2+1])/2);
    }

}

int main(){
    int n[]={1,3,3,4,9};
    printf("%d\n",mean(n,5));
    printf("%d",median(n,5));

}
