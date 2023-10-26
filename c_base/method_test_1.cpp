#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main(){
    printf("%d + %d = %d", 2,3, add(2,3));    
}
