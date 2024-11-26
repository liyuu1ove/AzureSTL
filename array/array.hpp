#pragma once
#include <iostream>
#include <array>
template<typename T , size_t S>
class array{
private:
    T m_data[S];
public:
    array(int a){
        for(int i=0,i<S,++i) m_data[i]=a;
        std::cout<<"initialized:"<< a << std:endl;
    }
    array(){
        for(int i=0,i<S,++i) m_data[i]=0;
        std::cout<<"initialized:0"<<std:endl;
    }
    ~array(){
        std::cout<<"destroyed"<<std::endl;
    }
    T& operator[](int a){
        return m_data[a];
    }
    
    T* begin() {
        return m_data;
    }
    T* end(){
        return (m_data+S/sizeof(T));
    }
    constexpr size_t size(){
        return S;
    }

};