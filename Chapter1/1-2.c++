#include <iostream>
#include <string>
using namespace std;

void reverse(char*, int);
void swap(char*, char*);

int main(){
    
    int n;
    cout << "Enter the string length." << endl;
    cin >> n;
    
    char* target = new char[n];
    cout << "Enter the string." << endl;
    cin >> target;
    
    cout << "reverse" << endl;
    reverse(target, n);
    cout << target << endl;
    
    delete[] target;
}

void reverse(char* s, int n){
    
    for(int i = 0; i < n/2; i++){
        swap(s[i], s[n-i-1]);
    }
}

void swap(char* a, char* b){
   
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}