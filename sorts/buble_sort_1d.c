#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand(int* arr, int n);
void swap(int *x, int *y);
void print_array(int* arr, int n);
void bubble_sort_1d(int* arr, int n);

int main(int argc, char* argv){
    int N=12;
    int array[N];    
    fill_rand(array,N);
    print_array(array,N);
    bubble_sort_1d(array,N);
    print_array(array,N);
    return 0;
}

void fill_rand(int* arr, int n){
    srand(time(0)); //use current time as seed for random generator
    for(int i=0;i<n;++i)
        *(arr+i) = rand()%100; //pseudo-random integer value between ​0​ and RAND_MAX (0 and RAND_MAX included) 
                               //but here %100 basically means RAND_MAX = 100
}

void swap(int *x, int *y){ //code style  "int *x" (not "int* x") means there is going to be variable pointer (option in brackets - pointer to an array)
    int t=*x;
    *x=*y;
    *y=t;
}

void print_array(int* arr, int n){
    for(int i =0; i<n; ++i)
        printf("[%d]\t", *(arr+i));
    printf("\n");
}

void bubble_sort_1d(int* arr, int n){ // int* arr - pointer to an array
    for(int i=0; i<n-1; ++i)
        for(int j=0; j<n-i-1; ++j)
            if(*(arr+j)>*(arr+j+1))
                swap((arr+j),(arr+j+1));
}