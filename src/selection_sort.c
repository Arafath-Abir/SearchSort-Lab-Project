
#include "sort.h"
void selection_sort(int *arr,int n){
    for(int i=0;i<n-1;++i){
        int mi=i;
        for(int j=i+1;j<n;++j) if(arr[j]<arr[mi]) mi=j;
        if(mi!=i){int t=arr[mi]; arr[mi]=arr[i]; arr[i]=t;}
    }
}