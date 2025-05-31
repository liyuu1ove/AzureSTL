#pragma once

#include <iostream>
#include <string>
class Animal{
public:
    virtual void const bark(){
        std::cout << "Nope" <<std::endl;        
    }
    Animal(std:: string name):_spice(name){}
    Animal():_spice("Nope"){}
private:
    std::string _spice;
};

class Dog : public Animal{
public:
    Dog():Animal("Dog"){}
    void const bark()override{
        std::cout << "DOG" <<std::endl; 
    }
};

class Cat : public Animal{
public:
    Cat():Animal("cat"){}
    void const bark()override {
        std::cout << "CAT" <<std::endl; 
    }
};

void bark_(Animal* ani){
    ani->bark();
}