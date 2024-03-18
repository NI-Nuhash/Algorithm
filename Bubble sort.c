#include<stdio.h>

void bubble_sort(int A[],int n){
int i,j,temp;

for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
        if(A[j]>A[j+1]){
            temp=A[j+1];
            A[j+1]=A[j];
            A[j]=temp;
        }
    }
}

}
 int main(){
 int A[]={2,8,4,9,0,12,89,44,87,1};
 int n=sizeof(A)/4;
 bubble_sort(A,n);

 for(int j=0;j<n;j++) printf("%d\n",A[j]);

 return 0;
 }
