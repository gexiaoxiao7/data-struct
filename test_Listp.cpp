// test_List1.cpp
#include <iostream>
using namespace std;

#include "LIst1.h"

int main()
{
    List *b; // constructor is not called here

    b = new List(20);
    delete b;

    
}