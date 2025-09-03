
#include "sort.h"
static void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
static int part(int *a,int l,int h){
    int p=a[h], i=l-1;
    for(int j=l;j<h;++j) if(a[j]<=p){++i; swap(&a[i],&a[j]);}
    swap(&a[i+1],&a[h]);
    return i+1;
}
static void qrec(int *a,int l,int h){
    if(l<h){int pi=part(a,l,h); qrec(a,l,pi-1); qrec(a,pi+1,h);}
}
void quick_sort(int *a,int n){ if(n>1) qrec(a,0,n-1); }