#include<stdio.h>

int main(){
    int* a; 
    *a = 1;
    printf("変数aのアドレスの値は%pです。\n",a);
    return 0;
}