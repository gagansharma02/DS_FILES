// LINEAR SEARCH

#include<stdio.h>

int Searching(int arr[],int N,int x){
    int i;
    for (i=0;i<N;i++){
        if(arr[i]==x){
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[10],N,x,s1;
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    printf("Enter the Element to Search :");
    scanf("%d",&x);
    s1=Searching(arr,N,x);
    if(s1!=-1){
        printf("Element is Found at position : %d",s1);
    }
    else{
        printf("Element Not Found");
    }
}
