#include<iostream>
using namespace std;
int main(){
    int *data,*temp;
    int i;

    // create origin array
    data = new int[5];
    for (i = 0;i < 5; i++){
        data[i] = i;
    }

    // create new larger array
    temp = new int[10];

    //copy from original array to larger array
    for (i = 0; i< 5;i++){
        temp[i] = data[i];
    }
    
    // deallocate original array
    delete []data;
    // make data pointer to new larger array
    data = temp;
    // now we can access 0-9
    for(i=5;i<10;i++){
        data[i] = i;
    }
    // deallocation last allocation ， 也相当于
    delete [] data;
}