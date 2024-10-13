#include <stdio.h>

int main(){ 
    
    FILE *ptr;
    ptr = fopen("harry.text", "a");
    fputc('c', ptr);
    return 0;
}