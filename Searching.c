#include<stdio.h>

int linearSearch(int array[],int size,int input){


    for(int i=0;i<size;i++)
        if(array[i]==input) return i;


    return -1;
}

int binarySearch(int array[],int size,int input){ //Array must be sorted in ascending or descending order

    int left=0,right=size-1,mid;

    while(left<=right){

            mid =(left+right)/2;

        if(array[mid]==input) return mid;
        else if(array[mid]<input) left=mid+1;
        else right=mid-1;
    }

     return -1;
}

int main(){

    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++) scanf("%d",&array[i]);

    int x;
    scanf("%d",&x);

    printf("%d\n",linearSearch(array,n,x));

     printf("%d\n",binarySearch(array,n,x));

    return 0;
}
