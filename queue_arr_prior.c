#include <stdio.h>

#define SZ 10

typedef struct{
    int pr;
    int data;
} Note;
Node* arr[SZ];
int head;//индекс головы очереди
int tail;//хвоста
int current_el;//текущее кол-во элементов в очереди

void init(){
    for (int i = 0; i<SZ; ++i){
        arr[i]=NULL;//нулевая ссылка
    }
    head = 0;
    tail = 0;
    current_el = 0;
}

void insert(int pr, int data){
    Note *node =(Node*) malloc(sizeof(Note));
    node->pr = pr;
    node->data = data;
    int flag;

    if(current_el == 0){
        arr[tail++]=node;
        current_el++;
    }else if(current_el==SZ){
        printf("%s \n", "Queue is full");
        return;
    }else{
        int i = 0;
        int idx = 0;
        Note *tmp;
        for(i =head; i<tail; ++i){
            idx = i % SZ;
            if(arr[idx]->pr>pr)
                break;
            else
                idx++;
        }
        flag = idx % SZ;
        i++;
        while (i<=tail){
            idx = i%SZ;
            tmp = arr[idx];
        }
        
    }

}


int main(int argc, const char **argv){
    
    return 0;
}