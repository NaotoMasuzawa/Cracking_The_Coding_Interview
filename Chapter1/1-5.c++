#include <iostream>
#include <string>
using namespace std;

string compression(string);

int main(){

    string original;
    cout << "Enter the original string." << endl;
    cin >> original;

    cout << "Compression in progress." << endl;
    string compressioned = compression(original);
    cout << compressioned << endl;
}

string compression(string original){

    string compressioned;
    
    int size = original.size();
    int* memo = new int [size];
    
    for(int i = 0; i < size; i++){
        memo[i] = 0;
    }
    
    for(int i = 0; i < size - 1; i++){
        if(original[i] != original[i + 1]){
            memo[i + 1] =  1;
        }
    }

    int prev = 0;
    int each_char_number;
    for(int i = 0; i < size; i++){
        
        if(memo[i] == 1){
            each_char_number = i - prev;
            compressioned += original[prev];
            compressioned += to_string(each_char_number);
            prev = i;
        }
    }
    compressioned += original[prev];
    compressioned += to_string(size - prev);
    
    delete[] memo;
    
    if(compressioned.size() > size){
        cout << "Compression failed." << endl;
        return original;
    }
    else{
        cout << "Compressed." << endl; 
        return compressioned;
    }
}