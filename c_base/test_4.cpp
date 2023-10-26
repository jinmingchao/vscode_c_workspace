#include <stdio.h>
#include <string.h>




void swap(int* pa, int* pb) {
        int tmp = 0;
        tmp = *pa;
        *pa = *pb;
        *pb = tmp;
}

int main() {
    // 1. 指针
    // int a = 10, b = 8;
    // int* pa = &a; //&a是取地址操作, pa是int型指针变量，存放的内容是a变量指向的地址
    // *pa = 20; //*pa是解引用操作，这里操作的实际上是a的值
    // printf("*pa = %d \n", a);
    // int* pb = &b;
    //swap(pa, pb);
    
    // printf("a = %d, b = %d", *pa, *pb);

    // 1.1
    // int c = 15;
    // int* pc = &c; //32位系统的寻址范围是2^32，所以32位系统上的指针类型占用空间是4字节；同理64位系统是8字节

    // 1.2 32位系统都是4，64位系统都是8
    // printf("%d\n", sizeof(char*));
    // printf("%d\n", sizeof(int*));
    // printf("%d\n", sizeof(double*));
    // printf("%d\n", sizeof(short*));


    // 1.3
    
    // int a = 0x19283A4D;
    // int* pa = &a;

    // *pa = 0x12345678;    
    // printf("%p\n", pa); //指针类型%p;

    // 1.4 
    // char b = 'a';
    // printf("%d",sizeof(b));

    // 1.5 指针移动
    // int a = 12;
    // int* pa = &a;
    // printf("%p\n", pa);
    // pa = pa + 1; // pa + 1, pa向后移动4个字节，移动的大小取决于pa的指针类型
    // printf("%p", pa);

    // 1.6 指针遍历数组
    int arr[] = {1,3,5,7,9,2,4,6,8,10};
    int* p = arr;
    printf("%d\n", *p); //1
    p += 1;
    printf("%d\n", *p); //3
    p += 2;
    printf("%d\n", *p); //7
    p -= 1;
    printf("%d\n", *p); //5
    p += 5;
    printf("%d\n", *p); //6



    
}