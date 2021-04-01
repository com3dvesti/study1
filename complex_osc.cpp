#include <iostream>
#include <complex>
using namespace std;

class oscillator {
    complex <double> state ={1.,0.}, rotation polar(1.,.01);
public:
    double operator () (){
        return real(state *= rotation) ;
    } 
   
};

int main(int argc, char const** argv) {
    oscillator o;
    while(1){
        cout<<o() <<endl;
    }
    
    return 0;
}
