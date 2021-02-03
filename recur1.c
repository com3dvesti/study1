#include <stdio.h>
void recu(int z){
    printf("%5d",z);
    if (z>0)
        recu(z-1);
}

int main(int argc, const char** argv){
    recu(10);
    return 0;
}