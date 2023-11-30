// BINARY SEARCH


int BinarySearch(int arr[],int N,int x){
    int low,high,mid;
    low=0;
    high=N-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return 1;
        }
        else{
            if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[10],N,x,s1;
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    printf("Enter the Element to Search :");
    scanf("%d",&x);
    s1=BinarySearch(arr,N,x);
    if(s1!=0){
        printf("Element is Found ");
    }
    else{
        printf("Element Not Found");
    }
}
