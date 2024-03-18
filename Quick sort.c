#include<stdio.h>


int partition(int arr[],int low,int high){

    int pi = arr[high];

    int i=low-1;

    for(int j=low;j<high-1;j++){

        if(arr[j]<pi){
            i++;
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        }

    }

   int temp1=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp1;

    return i+1;
}

void quickSort(int arr[],int low,int high){

    if(low<high){

    int pivot=partition(arr,low,high);

    quickSort(arr,low,pivot-1);

      quickSort(arr,pivot+1,high);
    }
}


int main(){

    int arr[]={0,9,4,7,3,6,2,1,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,size-1);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}
