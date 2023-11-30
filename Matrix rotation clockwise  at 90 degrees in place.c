// Matrix rotation clockwise  at 90 degrees in place

#include<stdio.h>
int main(){
int A[10[10],T[10][10],i,j,m,n;
scanf("%d%d",&m,&n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
//-------------------------------------------Transpose-----------------------
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
//-------------------------------------------Swapping-----------------------
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        A[i][j]=T[j][i];
    }
}
//-------------------------------------------Traversing-----------------------
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}

return 0;
}
