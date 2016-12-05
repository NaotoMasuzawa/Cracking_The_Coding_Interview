#include <iostream>
#include <string>
using namespace std;

string convert(string);

int main(){

    string original;
    string converted;
    
    cout << "Enter the string." << endl;
    getline(cin, original);

    converted = convert(original);
    cout << converted << endl;
}

string convert(string original){
    
    string converted;
    
    int size = original.size();
    for(int i = 0; i < size; i++){
        
        if(original[i] != 32){          //32 means space in ASCII.
            converted += original[i];
        }
        else if(original[i] == 32){
            converted +=  "%20";
        }
    }
    return converted;
}