// Program for reversal of an array.
#include<stdio.h>
ReversalArray(int arr[],int n){
    int temp;
for (int i=0;i<n/2;i++){
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}

}
int main(){
int arr[25],i,n;
printf("Enter Number of Elemets : ");
scanf("%d",&n);
printf("Enter Elements of an Array : ");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
ReversalArray(arr,n);
return 0;
}
