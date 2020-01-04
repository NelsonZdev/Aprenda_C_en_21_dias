#include <stdio.h>


int main(int *argc, char *argv[]){
    
    printf("\n char is %d bytes", sizeof(char));
    printf("\n in is %d bytes", sizeof(int));
    printf("\n short is %d bytes", sizeof(short));
    printf("\n long is %d bytes", sizeof(long));
    printf("\n unsigned char is %d bytes", sizeof(unsigned char));
    printf("\n unsigned int is %d bytes", sizeof(unsigned int));
    printf("\n unsigned short is %d bytes", sizeof(unsigned short));
    printf("\n unsigned long is %d bytes", sizeof(unsigned long));
    printf("\n float is %d bytes", sizeof(float));
    printf("\n double is %d bytes", sizeof(double));


    return 0;
}