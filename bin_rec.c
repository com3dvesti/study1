c#include <stdio.h>

int bintoint(int x){
    int z;
    if (x!=0)
        bintoint(x/2);    
    else return z;
    //printf("%d",x%2);
    z=(z*10)+x%2;
     printf("%d",z);
    return z;
}

int main(int argc, const char** argv){
    int x;
    //int z = 0;
    printf("%s","input an integer num:\n"); scanf("%d",&x);
    printf("\n %d",bintoint(x));
    return 0;
}