// You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list. You don't need to print or return anything, just change in the input array itself.

#include<stdio.h>
int main(){
    int arr[100],n,i,temp;
    printf("ENTER NUMBER OF ELEMENTS OF AN ARRAY : ");
    scanf("%d",&n);
    printf("ENTER ELEMENTS OF AN ARRAY : \n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        for(i=0;i<n;i+=2){
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    }
    else{
        for(i=0;i<n-1;i+=2){
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    }

    for (i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
