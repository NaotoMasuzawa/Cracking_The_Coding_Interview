#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){

    int a, b;
    cout << "Enter the a and b." << endl;
    cin >> a >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int* pointer_a = &a;
    int* pointer_b = &b;

    cout << "swapping." << endl;
    swap(pointer_a, pointer_b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void swap(int* a, int* b){

    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}