#include <string>
#include <iostream>
using namespace std;

class Engine {

private: 
    int power;

public:
    void setPower(int power) {
        this->power = power;
    }
    int getPower() {
    
        return power;
    }
};

class Passenger {

private:
    string name;

public: 
    void setName(string name) {
        this->name = name;
    }
    string getName() {

        return name;
    }
};


class Car {

private:
    Engine engine;
    string model;
public: 
    Passenger* passenger1;
    Passenger* passenger2;
    

    void car(string model, Engine engine) {
        this->model = model;
        this->engine = engine;
    }

    void addPassenger(Passenger* passenger) {
        if (passenger1 == NULL) {
            
            this->passenger1 = passenger; 
        }
        else {
            this->passenger2 = passenger;
        
        }
    
    }


    void removePassenger(Passenger passenger) {
        if (passenger1->getName() == passenger.getName()) {
            passenger1 = NULL; 
        }
    
        if (passenger2->getName() == passenger.getName()) {
            passenger2 = NULL;
        }
    }

    string displayInfo() {
        string d;
        d.append("Car Model: ");
        d.append(model);
        d.append("\n");
        d.append("Engine power: ");
        d.append(to_string(engine.getPower()));
        d.append("\n");
        d.append("Passenger 1: ");
        d.append(passenger1->getName());
        d.append("\n");
        d.append("Passenger 2: ");
        d.append(passenger2->getName());
        d.append("\n");
        return d;
    }


};



int main()
{
    Engine v12;
    v12.setPower(2);
    Passenger b1;
    b1.setName("Lesha");
    Passenger b2;
    b2.setName("Anton");
    Car Lada;
    Lada.car("Lada", v12);
    Lada.addPassenger(&b1);
    Lada.addPassenger(&b2);
    cout << Lada.displayInfo() << endl;

}
