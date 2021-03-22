#include <iostream>
#include <string>
using namespace std; 
class Fruit{
protected: 
    string name; 
    string colour; 
public: 
    Fruit(string N =" ", string C =" "):name(N),colour(C){} 
    string getName(){ 
        return name; 
    } 
    string getColor(){ 
        return colour; 
    }
};

class Apple : public Fruit{ 
public: 
    Apple(string c = " "):Fruit(name,c){ 
        name = "Apple";
    } 
};
class Banana : public Fruit{
public: 
    Banana():Fruit(name,colour){
        name ="banana";
        colour = "yellow" ;
     }
} ;
    //Banana(string c):Fruit(m_banana,c){ } 
     class GrannySmith : public Apple{
    string Gr_colour = "green"; 
    public: GrannySmith():Apple(colour){
        name = "Granny Smith apple"; 
        colour = "green";
    } 
     
}; 
int main(int argc, const char* argv[]){
    Apple a("red");
    Banana b; 
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n"; 
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n"; 
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    return 0;
    }
