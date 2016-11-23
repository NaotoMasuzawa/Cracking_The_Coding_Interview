#include <iostream>
#include <string>
using namespace std;

bool judge(string x, string y);

int main(){
    
    string x;
    string y;
    cout << "Enter the two strings." << endl;
    cin >> x >> y;
    
    if(judge(x, y)){
        cout << "Two strings are the same." << endl;
    }
    else{
        cout << "Two strings are not the same." <<endl;
    }
}

bool judge(string x, string y){
    
    int size_x = x.size();
    int size_y = y.size();
    
    if(size_x != size_y){
        return false;
    }
    
    int X[size_x];
    int Y[size_y];
    for(int i = 0; i < size_x; i++){
        X[i] = (int)(unsigned char)x[i];
        Y[i] = (int)(unsigned char)y[i];
    }
    for(int i = 0; i < size_x; i++){
        for(int j = 0; i <size_x; i++){
            if(i != j){
                if(X[i] < X[j]){
                    X[i] ^= X[j];
                    X[j] ^= X[i];
                    X[i] ^= X[j];
                }
                if(Y[i] < Y[j]){
                    Y[i] ^= Y[j];
                    Y[j] ^= Y[i];
                    Y[i] ^= Y[j];
                }
            }
        }
    }
    for(int i = 0; i < size_x; i++){
        if(X[i] == Y[i]){
            return true;
        }
    }
    return false;
}