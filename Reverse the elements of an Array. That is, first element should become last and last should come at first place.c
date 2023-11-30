// Reverse the elements of an Array. That is, first element should become last and last should come at first place.

#include<stdio.h>
int main(){
    int arr[100],n,i,temp;
    printf("ENTER NUMBER OF ELEMENTS OF AN ARRAY : ");
    scanf("%d",&n);
    printf("ENTER ELEMENTS OF AN ARRAY : \n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    for (i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
