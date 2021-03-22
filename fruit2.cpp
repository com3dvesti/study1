#include <iostream>
#include <string.h>

using namespace std; 
class Fruit{
protected: 
    string name ; 
    string colour ; 
public: 
    Fruit(std::string name = "", std::string color = "") { } 

    string getName() const{ 
        return name; 
    } 
    string getColor() const{ 
        return colour; 
    }
};

class Apple : public Fruit{ 
public: 
    Apple(){ 
    } 
    Apple(std::string col = ""){ 
        name = "apple";
        colour = col;
    } 
};
class Banana : public Fruit{
public: 
    Banana(){
        name ="banana";
        colour = "yellow" ;
     }
};

class GrannySmith : public Apple{

    public: 
    GrannySmith():Apple(){
        name = "Granny Smith apple"; 
        colour = "green";
    } 
     
}; 
int main(int argc, const char** argv){
   // Apple a("red");
    //Banana b; 
    GrannySmith c;
    //std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n"; 
    //std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n"; 
   std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    return 0;
    }
