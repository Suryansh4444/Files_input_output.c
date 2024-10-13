#include <stdio.h>

int main(){ 
    
    FILE *ptr;
    ptr = fopen("harry.text", "a");
   
 char c = fgetc(ptr);
 printf('%c', c);
    return 0;
}