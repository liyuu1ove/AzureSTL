#include <iostream>
#include "timer.h"

int main() {
    int a=0;
    {
    Timer timer;
    for (int i = 0;i<100000000;++i){
        ++a;
    }
    }

}