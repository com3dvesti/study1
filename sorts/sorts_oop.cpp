#include "iostream"
#include "time.h"

using std::cin;
using std::cout;
using std::endl;

class sortArray{]
private:
    int n;
    int arr[n];
    void swap(int *x, int *y){
        int t=*x;
        *x=*y;
        *y=t;
    }
public:
    sortArray(int* arr1, int N):n(N){
        arr=arr1;
    }
    void fill_rand(){
        srand(time(0));
        for(int i=0; i<*n; ++i)
            *(arr+i) = rand()%100; //a[i] = ... the same
    }



    void printArr(){
        for(int i=0; i<*n; ++i)
            printf("[%d] \t", *(arr+i));
        printf("\n");
    }

/*
    void inserts_1d(){
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
    */
};

int main(int argc, const char *_argv[]){
     int N=0;  cin>>N;
     int* arr;
     sortArray done(arr,N);
     done.fill_rand();
     done.printArr();
     //done.inserts_1d();

}


