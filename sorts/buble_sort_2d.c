#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** init_arr(int** arr, int row, int col);
void fill_rand(int** arr, int row, int col);
//void swap(int *x, int *y);
void print_array(int** arr, int row, int col);
//void bubble_sort_1d(int** arr, int row, int col);

int main(int argc, char* argv){
    int ROW=3,COL=3;
    int** array= init_arr(array,ROW,COL);    
    fill_rand(array,ROW,COL);
    print_array(array,ROW,COL);
   //bubble_sort_1d(array,N);
    //print_array(array,N);
    return 0;
}

int** init_arr(int** arr, int row, int col){
    srand(time(0)); //use current time as seed for random generator
    for(int i=0;i<row;++i)
        *(arr+i) = (int*) calloc(sizeof(int),col);//
    return arr;                           
}

void fill_rand(int** arr, int row, int col){
    srand(time(0)); //use current time as seed for random generator
    for(int i=0;i<row;++i)
        for(int j=0;j<col;++j)
            *((*(arr+i))+j) = rand()%100; //pseudo-random integer value between ​0​ and RAND_MAX (0 and RAND_MAX included)                                //but here %100 basically means RAND_MAX = 100
                                        //but here %100 basically means RAND_MAX = 100
}

/*void swap(int *x, int *y){ //code style  "int *x" (not "int* x") means there is going to be variable pointer (option in brackets - pointer to an array)
    int t=*x;
    *x=*y;
    *y=t;
}*/

void print_array(int** arr, int row, int col){
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j)
            printf("[%d]\t", *((*(arr+i))+j));
        printf("\n");
    }
}
/*
void bubble_sort_1d(int* arr, int row, int col){ // int* arr - pointer to an array
    for(int i=0; i<n-1; ++i)
        for(int j=0; j<n-i-1; ++j)
            if(*(arr+j)>*(arr+j+1))
                swap((arr+j),(arr+j+1));
}*/