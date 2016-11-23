#include <iostream>
#include <string>
using namespace std;

int main(){

    string target;
    string converted_target;
    
    cout << "Enter the string." << endl;
    getline(cin, target);
    
    for(int i = 0, size = target.size(); i < size; i++){
        
        if(target[i] != 32){                            //32 means space in ASCII.
            converted_target += target[i];
        }
        else if(target[i] == 32){
            converted_target +=  "%20";
        }
    }
    cout << converted_target << endl;
    return 0;
}