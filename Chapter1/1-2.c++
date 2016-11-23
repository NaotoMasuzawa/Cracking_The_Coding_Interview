#include <iostream>
#include <string>
using namespace std;

void reverse(char*);
void swap(char*, char*);

int main(){
    
    char s[] = "REVERSE";
    cout << s << endl;
    reverse(s);
    cout << s << endl;
    return 0;
}

void reverse(char* s){
    
    int n = strlen(s);
    for(int i = 0; i < n/2; i++){
        swap(s[i], s[n-i-1]);
    }
}

void swap(char &a, char &b){
   
    a ^= b;
    b ^= a;
    a ^= b;
}
