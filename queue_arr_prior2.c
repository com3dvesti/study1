#include <stdio.h>
#include <stdlib.h>

#define SZ 10

typedef struct{
    int pr;
    int data;
} Node;
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
    Node *node =(Node*) malloc(sizeof(Node));
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
        int idx = tail++%SZ;
        //Node *tmp = arr[idx];
        arr[idx]=node;
        current_el++;
    }
}


Node* remove_(){
    if(current_el == 0){
        return NULL;
    }else{
        int i = 0;
        int idx = 0;
        Node *tmp;
        Node* tmmp = 0;
        int flag;

        for(int k =0; i<SZ-1; ++i){
            for(int z=0; z<SZ-i-1;++z){
                if(arr[z]->pr>arr[z+1]->pr)
                    tmmp=arr[z];
                else
                    tmmp=arr[z+1];
            }
        }
        int pr = tmmp->pr;
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
            arr[idx] = arr[flag];
            arr[flag] = tmp;
            i++;
        }
        tmp = arr[flag];
        arr[flag]=NULL;
        tail--;
        current_el--;
        return tmp;
    }
}

void print_queue(){
    printf("[ ");
    for(int i=0; i<SZ; ++i){
        if(arr[i] == NULL)
            printf("[*, *] ");
        else
            printf("[%d, %d] ", arr[i]->pr,arr[i]->data);
    }
    printf(" ] \n");
}




int main(int argc, const char **argv){
    init();
    insert(1,11);
    insert(3,22);
    insert(4,33);
    insert(2,44);
    insert(3,55);
    insert(4,66);
    insert(5,77);
    insert(1,88);
    insert(2,99);
    insert(6,100);
    print_queue();
    Node *n = remove_();
    printf("pr=%d, data=%d \n", n->pr, n->data);
    remove_();
    print_queue();
    return 0;
}