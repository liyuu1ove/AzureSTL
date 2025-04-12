#include "array.hpp"

int main(){
    array<int,10> Array(3);
    std::cout << Array.size() <<std::endl;
    Array.print();
    Array[3]=1;
    Array.print();

}