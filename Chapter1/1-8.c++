#include <iostream>
#include <string>
using namespace std;

bool judge(string, string);

int main(){
    
    string original;
    string target;
    
    cout << "Enter the original." << endl;
    cin >> original;
    
    cout << "Enter the target." << endl;
    cin >> target;
    
    if(judge(original, target)){
        cout << "The target is the original rotated." << endl;
    }
    else{
        cout << "The target is not the original rotated." << endl;
    }
}

bool judge(string x, string y){
    
    int size_x = x.size();
    int size_y = y.size();
    
    if(size_x != size_y){
        return false;
    }
    
    for(int i = 0; i < size_x; i++){
        string sliced_x_1;
        string sliced_x_2;
        string combined;
        
        for(int j = 0; j <= i; j++){
            sliced_x_1 += x[j];
        }
        for(int k = (i + 1); k < size_x; k++){
            sliced_x_2 += x[k];
        }
        combined = sliced_x_2 += sliced_x_1;
        if(y == combined){
            return true;
        }
    }
    return false;
}