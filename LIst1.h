#ifndef __LIST_H__
#define __LIST_H__

#include<iostream>

class List{

public:
    List(int capacity=10);
    ~List() { delete []data_ ; std::cout<<"destructor\n";}
private:
    int size_;
    int capacity_;
    int *data_;

};

inline List::List(int capacity)
{
    std::cout<<"constructor\n";
    data_ = new int[capacity];
    size_ = 0;
    capacity_ = capacity;
};

#endif
