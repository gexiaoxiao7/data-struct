#ifndef __LIST_H__
#define __LIST_H__

#include<iostream>

class List {
public:
    List(int capacity=10);
    List(const List &source);
    ~List() { delete [] data_; std::cout<< "destructor\n"; }
private:
    int size_;
    int capacity_;
    int *data_;
};

inline List::List(const List &source )
{
    int i;

    std::cout << "copy constructor\n";
    size_ = source.size_;
    capacity_ = source.capacity_;
    data_ = new int[capacity_];
    for (i=0;i<size_;++i){
        data_[i] = source.data_[i];
    }
}

inline List::List(int capacity){
    std::cout<<"constructor\n";
    data_ = new int[capacity];
    size_ = 0;
    capacity_ = capacity;
}

#endif