// Program to insert the given elements into an array.
#include<stdio.h>
int InsertArray(int arr[],int x,int N,int y){
    int i;
    for (i=N;i>=x;i--){
        arr[i+1]=arr[i];
    }
    arr[x]=y;
    for (i=0;i<N+1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}
int main(){
    int arr[50],i,x,n,y;
    printf("Enter Number of Elements Of an array : ");
    scanf("%d",&n);
    printf("Enter Elements in array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Element which you want to insert : ");
    scanf("%d",&y);
    printf("Enter Positon : ");
    scanf("%d",&x);



    InsertArray(arr,x,n,y);
return 0;}
