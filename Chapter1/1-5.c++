#include <iostream>
#include <string>
using namespace std;

string compression(string);

int main(){

    string original;
    cout << "Enter the original sequence." << endl;
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
        if(i != size - 1){
            memo[i] = 0;
        }
        else if(i == size - 1){
            memo[i] = 1;
        }
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
            if(i != size - 1){
                each_char_number = i - prev;
            }
            else if(i == size - 1){
                each_char_number = i - prev + 1;
            }
            compressioned += original[prev];
            compressioned += to_string(each_char_number);
            prev = i;
        }
    }
    delete[] memo;
    
    return compressioned;
}