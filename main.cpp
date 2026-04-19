#include <iostream>
// 1-lab: Animal → Dog, Cat (virtual speak())
// 2-lab: Abstrakt Transport
class Transport {
    public:
    Transport() = default;
    virtual void Transporting_way()=0;
    virtual double samaradorligi(double actual_distance,double real_distance)=0;
    virtual ~Transport()=default;
};
class plane: public Transport {
    public:
    void Transporting_way() override {
        std::cout<<"I fly over you! So I am plane you know."<<std::endl;
    };
    double samaradorligi(double actual_distance , double real_distance) override {
        return actual_distance/real_distance*100;
    };
};
class car : public plane {
    public:
    void Transporting_way() override {
        std::cout<<"I run with you! So you know what, I am your car. "<<std::endl;
    };
    double samaradorligi(double actual_distance , double real_distance) override {
        return actual_distance/real_distance*100;
    };
};

class Animal {
    public:
    virtual void Speak(){
        std::cout<<"Speak"<<std::endl;
    }

};
class Dog: public Animal {
    public:
    void Speak()override {
        std::cout<<"Woof woof!"<<std::endl;
    }
};
class Cat: public Animal {
    public:
    void Speak()override {
        std::cout<<"Miaow miaow"<<std::endl;
    }
};
int main() {
    int choose = 0;
    std::cout<<"Choose your choice:1->1-lab, 2-> Lab-2"<<std::endl;
    std::cin>>choose;
    if (choose==1) {
        Dog dog1;
        dog1.Speak();
        Cat cat1;
        cat1.Speak();
    }else if (choose==2) {
        plane plane1;
        plane1.Transporting_way();
        std::cout<<"samaradorligi:"<<plane1.samaradorligi(1700,2900)<<"%"<<std::endl;
        car car1;
        car1.Transporting_way();
        std::cout<<"samaradorligi:"<<car1.samaradorligi(1700,1900)<<"%"<<std::endl;
    }


}