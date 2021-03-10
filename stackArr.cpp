#include <iostream>
using namespace std;

class Stack{
    int arrSta[9];
    int head;
public:
    Stack():head(-1){};
    void reset(){
        for(int i=0;i<head;i++)
            arrSta[i]=0;
        head =-1;
    }
    bool push(int data){
        if (head<(int)(sizeof(arrSta)/sizeof(int))){
            arrSta[++head]=data;
            return true;
        }else{
            cout<<"Stack is overflow \n" ;
            return false;
        }
    }
    int pop(){
        if (head != -1){
        return arrSta[head--];
        }else{
            cout<<"Stack is empty\n";
        }
    }
    void print(){
        if(head ==-1){
            cout << "() \n";
        }else{
            cout << "(";
            for(int i=0;i<=head;i++)
                cout<<" "<< arrSta[i]<<" ";
            cout << ") \n";
        }
    }
};

int main(int argc, char** argv){
    Stack stack;
    stack.print();
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.print();

    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();

    return 0;
}

