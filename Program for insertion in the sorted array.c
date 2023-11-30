// Program for insertion in the sorted array
#include<stdio.h>
int InsertSortedArray(int arr[],int N,int y){
    int i,j,temp;
    for (i=0;i<N;i++){
        if (arr[i]>y){
            for(j=N;j>=i;j--){
                arr[j+1]=arr[j];
            }
            arr[i]=y;
            break;
            }

        }
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
    InsertSortedArray(arr,n,y);
return 0;}
