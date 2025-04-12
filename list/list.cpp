#include <iostream>
#include "list.h"

int main(){
   SLList<int> L(1);
   L.pushfront(2);
   L.pushfront(100);
   L.printList();
   std::cout<<L.size()<<std::endl;
}