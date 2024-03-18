#include<stdio.h>


void merge(int arr[],int lb,int mid,int ub){

    int n1=mid-lb+1,n2=ub-mid;
    int l[n1],r[n2];
    int i=0,j=0,k=lb;

    for(int x=0;x<n1;x++)
        l[x]=arr[lb+x];

      for(int y=0;y<n1;y++)
        r[y]=arr[mid+1+y];

     while(i<n1 && j<n2){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        }else{
             arr[k]=r[j];
            j++;
        }
        k++;
     }

     while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
     }

          while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
     }


}


void mergeSort(int arr[],int lb,int ub){

    if(lb<ub){
        int mid=lb+(ub-lb)/2;

        mergeSort(arr,lb,mid);
         mergeSort(arr,mid+1,ub);
         merge(arr,lb,mid,ub);
    }

}


int main(){

    int arr[]={10,0,3,9,99,100,6,2,5,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,size-1);

    for(int i=0;i<size;i++){

        printf("%d ",arr[i]);
    }

     printf("\n");

     return 0;
}
