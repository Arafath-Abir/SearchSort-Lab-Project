
#include "search.h"
int binary_search(const int *a, int n, int target){
    int l=0, r=n-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(a[m]==target) return m;
        if(a[m]<target) l=m+1; else r=m-1;
    }
    return -1;
}