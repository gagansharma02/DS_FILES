// Program for Set union

#include<stdio.h>
int main(){
int a[20],b[20],i,j,c[20],n,m,k=0;
scanf("%d%d",&m,&n);
for (int i=0;i<m;i++){
    scanf("%d",&a[i]);
}
for (int i=0;i<n;i++){
    scanf("%d",&b[i]);
}
for(int i=0;i<m || i<n;i++){
    if (a[i]==b[j]){
        c[i]=a[i];
        n++;
    }
    else{
        c[i]=a[i];
        c[i]=b[i];
        k=k+2;
        }
}

for (int i=0;i<k;i++){
    printf("\n\n%d\t",c[i]);
}

}
