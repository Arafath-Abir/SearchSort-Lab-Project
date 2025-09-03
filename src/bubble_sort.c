
#include "sort.h"
void bubble_sort(int *a, int n){
    int swapped=1;
    for(int i=0;i<n-1 && swapped;++i){
        swapped=0;
        for(int j=0;j<n-i-1;++j){
            if(a[j]>a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                swapped=1;
            }
        }
    }
}