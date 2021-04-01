#include <iostream>
using namespace std;
template <typename T, typename L>
class Pair1{
private:
    T m_x;
    L m_y;
public:
    Pair1(const T& x, const L& y):m_x(x), m_y(y) {}
    T& first(){return m_x;} 
     const T& first() const {return m_x;}
    
     L& second() {return m_y;}
     const L& second() const {return m_y;}
};


int main(){
	    Pair1<int, double> p1(8,19.5);
    cout <<p1.first()<<"\n"<< p1.second()<<"\n";
	return 0;
}
    
