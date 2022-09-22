#include <iostream>
using namespace std;
#include "List2.h"

void f(List c)
{
    cout<< "start f\n";
    cout<< "end f\n";
}

void g(List &d)
{
    cout<< "start g\n";
    cout<< "end g\n";
}

int main(){
    List b;
    f(b);
    g(b);

    List e(b);
    return 0;
}