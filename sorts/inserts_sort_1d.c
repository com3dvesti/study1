#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand(int* arr,const int *n);
void swap(int *x, int *y);
void printArr(int* arr, const int *n);
void inserts_1d(int* arr, const int *n);

int main(int argc, char* argv){
    int N=0;  scanf("%d", &N); 
    const int n1 = N;
    int arr[n1];
    fill_rand(arr,&n1);
    printArr(arr,&n1);
    inserts_1d(arr,&n1);
    printArr(arr,&n1);
    return 0;
}

void fill_rand(int* arr,const int *n){
    srand(time(0));
    for(int i=0; i<*n; ++i)
        *(arr+i) = rand()%100; //a[i] = ... the same
}

void swap(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

void printArr(int* arr, const int *n){
    for(int i=0; i<*n; ++i)
        printf("[%d] \t", *(arr+i));
    printf("\n");
}


void inserts_1d(int* arr, const int *n){
    int tmp, pos;
    for(int i=1;i<*n;++i){
        tmp = arr[i];
        pos = i-1;// 0 эл. считается отсортирован 
        while ((pos)>=0 && arr[pos]>tmp){
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1] = tmp;      
    }
}