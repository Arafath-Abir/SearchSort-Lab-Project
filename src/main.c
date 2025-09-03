
#include <stdio.h>
#include <stdlib.h>
#include "include/search.h"
#include "include/sort.h"
#include "include/utils.h"

static int* read_arr(int *n){
    printf("Enter number of elements: ");
    scanf("%d", n);
    int *a = (int*)malloc(*n*sizeof(int));
    printf("Enter %d integers: ", *n);
    for(int i=0;i<*n;++i) scanf("%d",&a[i]);
    return a;
}

static void menu(){
    printf("\n=== Search & Sort Suite ===\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (auto-sorts first)\n");
    printf("3. Bubble Sort\n");
    printf("4. Quick Sort\n");
    printf("5. Insertion Sort\n");
    printf("6. Merge Sort\n");
    printf("7. Selection Sort\n");
    printf("0. Exit\n");
    printf("Choice: ");
}

int main(void){
    int c;
    while(1){
        menu();
        if(scanf("%d",&c)!=1) break;
        if(c==0) break;
        int n, *a = read_arr(&n);
        if(c==1){
            int t; printf("Target: "); scanf("%d",&t);
            int idx = linear_search(a,n,t);
            if(idx!=-1) printf("Found at index %d\n", idx); else printf("Not found\n");
        } else if(c==2){
            int t; printf("Target: "); scanf("%d",&t);
            merge_sort(a,n);
            int idx = binary_search(a,n,t);
            printf("Sorted array: "); print_array(a,n);
            if(idx!=-1) printf("Found at index %d (in sorted array)\n", idx); else printf("Not found\n");
        } else if(c==3){ bubble_sort(a,n); printf("Bubble: "); print_array(a,n);
        } else if(c==4){ quick_sort(a,n); printf("Quick: "); print_array(a,n);
        } else if(c==5){ insertion_sort(a,n); printf("Insertion: "); print_array(a,n);
        } else if(c==6){ merge_sort(a,n); printf("Merge: "); print_array(a,n);
        } else if(c==7){ selection_sort(a,n); printf("Selection: "); print_array(a,n);
        } else { printf("Invalid choice\n"); }
        free(a);
    }
    return 0;
}