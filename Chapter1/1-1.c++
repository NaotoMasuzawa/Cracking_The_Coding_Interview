#include <iostream>
#include <string>
using namespace std;

bool judge(string);

int main(){

    string x;
    cout << "Please enter the string." << endl;
    cin >> x;

    if(judge(x)){
        cout << "String is unique." <<endl;
    }
    else{
        cout << "String is not unique." <<endl;
    }
}

bool judge(string x){

    for(int i = 0; i < x.size(); i++){
        for(int j = 0; j < x.size(); j++){
            if( x[i] == x[j] && ( i != j ) ){
                return false;
            }
        }
    }
    return true;
}