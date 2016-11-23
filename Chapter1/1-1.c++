#include <iostream>
#include <string>
using namespace std;

int main(){

    string x;
    int count;
    cout << "Please enter the string." << endl;
    cin >> x;
    
    for(int i = 0; i < x.size(); i++){
        for(int j = 0; j < x.size(); j++){
            if( x[i] == x[j] && ( i != j ) ){
                count++;
            }
        }
    }
    if(count == 0){
        cout << "String is unique." <<endl;
    }
    else{
        cout << "String is not unique." <<endl;
    }
    return 0;
}