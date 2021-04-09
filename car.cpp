
/*
Создать класс Car (автомобиль) с полями company (компания) и model (модель). 
Классы-наследники: PassengerCar (легковой автомобиль) и Bus (автобус). 
От этих классов наследует класс Minivan (минивэн). 
Создать конструкторы для каждого из классов, чтобы они выводили данные о классах. 
Создать объекты для каждого из классов и посмотреть, в какой последовательности выполняются конструкторы. 
Обратить внимание на проблему «алмаз смерти». 
*/
#include <iostream>
#include <string>
using namespace std;

class Car{
protected:
    string company;
    string model;
public:
    Car(string co, string mod):company(co),model(mod){ }
    virtual string getCompany(){
        return company;
    }
    virtual string getModel(){
        return model;
    }

};

class PassengerCar: virtual public Car{
public:
    PassengerCar(string co){
        company = co;
        model = "Passenger Car";
    }
    string getCompany() override{
        return company;
    }
    string getModel() override{
        return model;
    }
};
class Bus: virtual public Car{
public:
    Bus(string co){
        company = co;
        model = "Bus";
    }
    string getCompany() override{
        return company;
    }
    string getModel() override{
        return model;
    }
};

class Minivan: public PassengerCar, public Bus{
public:
    Minivan(string co){
        company = co;
        model="Minivan";
    }
    string getCompany() override{
        return company;
    }
    string getModel() override{
        return model;
    }
};

 int main(int argc, const char** argv){
     Bus x("BMW");
     cout<<x.getCompany();
     return 0;
 }