#include <stdio.h>

int main(){
    // 1. array
    int arr[] = {0,1,2,3,4,5,6,7};

    int k = 7, sz = sizeof(arr), sz_1 = sizeof(arr[0]), sz_2 = sizeof(arr[1]);
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("sz is %d, sz_1 is %d, sz_2 is %d \n", sz, sz_1, sz_2);

    for (int i = 0; i < size; i++) {
        if (k == arr[i]) {
            printf("%d is founded.", k);
        }
    }


    
}
