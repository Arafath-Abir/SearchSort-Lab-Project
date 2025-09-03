
#include "search.h"
int linear_search(const int *a, int n, int target){
    for(int i=0;i<n;++i) if(a[i]==target) return i;
    return -1;
}