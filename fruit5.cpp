#include <iostream>
#include <string>
using namespace std; 

class Fruit {
protected:
    string name;
    string color;
public:
    Fruit(string n, string c) : name(n), color(c) {}
    string getName() const {
          return name;
    }
    string getColor() const {
             return color;
    }
};

class Apple : public Fruit {
public:
    Apple(string color) : Fruit("apple", color) {}
};

class Banana : public Fruit {
public:
    Banana() : Fruit("banana", "yellow") {}
};
class GrannySmith : public Apple {
public:
    GrannySmith() :Apple("green") {
        name = "Granny Smith apple";

    }
};

int main(int argc, const char** argv){
    Apple a("red");
    Banana b;
    GrannySmith c;
    cout << "My " << a.getName() << " is " << a.getColor() << endl;
    cout << "My " << b.getName() << " is " << b.getColor() << endl;
    cout << "My " << c.getName() << " is " << c.getColor() << endl;
    return 0;
}