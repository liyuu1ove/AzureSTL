#pragma once
#include <iostream>
#include <array>
template<typename T , size_t S>
class array{
private:
    T* m_data;
public:
    array(int a){
        m_data=new T[S];
        for(int i=0;i<S;++i) m_data[i]=a;
        std::cout<<"initialized:"<< a << std::endl;
    }
    array(){
        m_data=new T[S];
        for(int i=0;i<S;++i) m_data[i]=0;
        std::cout<<"initialized:0"<<std::endl;
    }
    ~array(){
        delete[] m_data;
        std::cout<<"destroyed"<<std::endl;
    }
    void print(){
        std::cout<<"array:";
        for(int i=0;i<S;++i){
            std::cout<<m_data[i]<<" ";
        }
        std::cout << std::endl;
    }
    T get(int a){
        return m_data[a];
    }
    T& operator[](int a){
        return m_data[a];
    }
    
    T* begin() {
        return m_data;
    }
    T* end(){
        return (m_data+S);
    }
    constexpr size_t size(){
        return S;
    }

};