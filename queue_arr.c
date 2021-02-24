#include <stdio.h>
#include <stdlib.h>

#define T char
#define SIZE 1000
#define true 1 == 1
#define false 1 != 1

typedef int bolean;

T Queue[SIZE];
int first = 0;
int last = -1;

bolean enqueue(T data){
    if(last < SIZE){
        Queue[++last]= data;
        return true;
    }else{
        printf("%s \n", "Queue is full");
        return false;
    }
}

T dequeue(){
    if(first<=last){
        return Queue[first++];
    }else{
        printf("%s \n", "Queue is empty");
        return -1;
    }
}

int main(int argc, const char **argv){
    enqueue('a');
    enqueue('b');
    enqueue('c');
    enqueue('d');
    enqueue('e');
    enqueue('f');
    while(last>=first){
        printf("%c ", dequeue());
    }
    return 0;
}