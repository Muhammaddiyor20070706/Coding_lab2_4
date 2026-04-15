#include <iostream>
//1-lab: Static umumiy qiymat (hamma obyekt uchun umumiy)
//2-lab: Transport → Car
class Transport {
    static int count;
    public:
    Transport(){
        count++;
    }

    virtual ~Transport() {
        count--;
    }
    virtual void transport(){
        std::cout<<"Transportation function"<<std::endl;
    }
    static void getCount() {
        std::cout<<"static Count:"<<count<<std::endl;
    }

};
int Transport::count = 0;
class Car: public Transport {
    public:
    void transport()override {
        std::cout<<"Car only transports on road"<<std::endl;
    }
};
class Ship: public Transport {
    public:
    void transport()override {
        std::cout<<"Ship only transports on Sea"<<std::endl;
    }
};
class Plane: public Transport {
    public:
    void transport()override {
        std::cout<<"Plane only transports on Air"<<std::endl;
    }
};




int main() {
    Car car;
    Car::getCount();
    car.transport();
    Ship ship;
    Ship::getCount();
    ship.transport();
    Plane plane;
    Plane::getCount();
    plane.transport();
}