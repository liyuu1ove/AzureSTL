#include "class.h"
#include <vector>

int main(){
    Cat* cat= new Cat;
    cat->bark();
    Dog* dog=new Dog;
    Animal* Animal_point_Dog=dynamic_cast<Animal*>(dog);    
    Animal_point_Dog->bark();
    std::vector<Animal*> all{cat,dog};
    all[0]->bark();
}