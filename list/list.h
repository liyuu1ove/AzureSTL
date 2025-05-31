#pragma once
#include <iostream>

template <typename T>
class List{
protected:
    class ListNode {
    private:
        T _data;
        ListNode* _next;
        int _size(){
            if(this->_next==nullptr){
                return 1;
            }
            else return 1+this->_next->_size();
        }
    public:
        ListNode(T data,ListNode* next):_data(data),_next(next){
            std::cout << "Node:" << data<< " Created"<<std::endl;
        };
        T& data() {
            return _data;
        }
        ListNode*& next(){
            return _next;
        }
        int size(){
            return _size();
        }
    };
};

template <typename T>
class SLList:public List<T>
{
private:
ListNode* _first;    
public:
    SLList(T data){
        _first=new ListNode(data,nullptr);
        std::cout << "SLList:" << data<< " Created"<<std::endl;
    };
    // ~SLList(){

    // }
    void pushfront(T data){
        _first=new ListNode(data,_first);
        std::cout << "SLList:" << data<< " Added at front"<<std::endl;
    }
    void printList(){
        ListNode* tempptr=_first;
        std::cout << "SLListPrint:" ;
        while(tempptr->next()!=nullptr){
            std::cout<< tempptr->data()<<" ";
            tempptr=tempptr->next();
        };
        std::cout<< tempptr->data();
        std::cout<<std::endl;
    }
    int size(){
        return _first->size();
    }

};