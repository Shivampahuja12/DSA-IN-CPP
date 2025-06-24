/* 
ellipses ...
va_list         DATATYPE
va_start        MACROS
va_end          MACROS
va_arg          MACROS
*/


#include<stdio.h>
#include<stdarg.h>
void printNumbers(int size, ...){
    int value;
    va_list args;
    va_start(args, size);
    for(int i=0; i<size; i++){
        value =  va_arg(args, int);
        printf("%d ", value);
    }
    va_end(args);
    printf("\n");
}
int main(){
    printNumbers(12, 5, 6, 7, 8, 9, 30,234,22,12,123,123,4,45);
    printf("\n");
    return 0;
}