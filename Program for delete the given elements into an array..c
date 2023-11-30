// Program for delete the given elements into an array.
#include<stdio.h>
int DeleteNumberArray(int arr[],int N,int y){
    int i,j,temp;
    for (i=0;i<N;i++){
        if (arr[i]==y){
            for(j=i;j<N-1;j++){
                arr[j]=arr[j+1];
            }
            break;
            }

        }
    for (i=0;i<N-1;i++){
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
    printf("Enter Element which you want to delete : ");
    scanf("%d",&y);
    DeleteNumberArray(arr,n,y);
return 0;}
