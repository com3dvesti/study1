#include "arr_cont.h"

int main(){
    ArrayInt arr(6);
    arr[0] = 5; arr[1] = 3; arr[2] = 2;
    arr[3] = 1; arr[4] = 4; arr[5] = 7;
    //std::cout << sizeof(arr) / sizeof(arr[0]);
    arr.printArr_container();
    arr.sortInsert();
    arr.delete_last_element();
    arr.printArr_container();
    arr.delete_first_element();
    arr.printArr_container();
    //std::cout << sizeof(arr) / sizeof(arr[0]);
    return 0;
}