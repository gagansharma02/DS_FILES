// Program to find which element is repeated in the array and which is not


#include<stdio.h>
int RepeatedElementArray(int arr[],int N){
    int i,arr1[10]={0};
    for (i=0;i<N;i++){
        arr1[arr[i]]+=1;
        }
    for (i=0;i<10;i++){
            if (arr1[i]>=2){
                printf("\t%d : %d\t",i,arr1[i]);
            }
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
    RepeatedElementArray(arr,n);
return 0;}
