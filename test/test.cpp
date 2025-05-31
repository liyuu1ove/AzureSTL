#include <iostream>
#include <vector>
using namespace std;

void print_binary(int number){
    if(number==0){
        return;
    }
    cout<<number%2;
    print_binary(number/2);
}

int main(){
    int a = 10/0;
    
}
