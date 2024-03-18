#include<stdio.h>
 void insertion_sort(int A[],int n){
 int i,j,item;
 for(i=1;i<n;i++){
    item=A[i];
    j=i-1;
 while(j>=0 && A[j]>item){
    A[j+1]=A[j];
    j=j-1;
 }
    A[j+1]=item;
 }

 }

 int main(){

 int A[]={2,4,3,1,5,7,9,0,33,22,44};
 int n=sizeof(A)/4;
  insertion_sort(A,n);

  for(int j=0;j<n;j++) printf("%d\n",A[j]);

  return 0;

 }
