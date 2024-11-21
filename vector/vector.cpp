#include <iostream>
#include <vector>
#include "vector.hpp"

int Vertex::counter_copied;
int Vertex::counter_created;

int main(){
    Vertex::counter_copied=0;
    Vertex::counter_created=0;
    std::vector<Vertex> v;
    v.reserve(3);
    v.push_back(Vertex(1,2,3));
    v.push_back(Vertex(4,5,6));
    v.push_back(Vertex(7,8,9));
}