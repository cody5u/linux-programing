#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

// 默认的定义
int add(int a, int b);
int sub(int a, int b);
int div1(int a, int b);

int main(int argc, char *argv[])
{
    int a = 14, b = 7;
    printf("%d+%d=%d\n", a,b,add(a,b));
    printf("%d+%d=%d\n", a,b,sub(a,b));
    printf("%d+%d=%d\n", a,b,div1(a,b));
    return 0;
}