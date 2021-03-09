#include <stdio.h>
#include <stdlib.h>

#define T char
#define SIZE 10
#define true 1 == 1
#define false 1 != 1

typedef int bolean;

T Queue[SIZE];
int first = 0;
int last = -1;
int items = 0;

bolean enqueue(T data){
    if(items==SIZE){
        printf("%s \n", "Queue is full");
        return false;
    }
    if(last == SIZE-1){
        last = -1;
        Queue[++last]= data;
        items++;
        return true;
    }
}

T dequeue(){
    if(items==0){
        printf("%s \n", "Queue is empty");
        return -1;
    }else{
        char tmp = Queue[first++];
        //printf("%c ", tmp);
        first %=SIZE;
        items--;
        return tmp; 
    }
}

int main(const int argc, const char **argv){
    //int i=0;
 //   while (i<10){
        enqueue('a');
        enqueue('b');
        enqueue('c');
        enqueue('d');
        enqueue('e');
        enqueue('f'); 
        while(items>0){
            printf("%c ", dequeue());
        }
        printf("\n");
      //  i++;
    
    return 0;
}