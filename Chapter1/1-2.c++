#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b){
	a ^= b;
	b ^= a;
	a ^= b;
}

void reverse(char* s){
	int n = strlen(s);
	for(int i = 0; i < n/2; i++){
		swap(s[i], s[n-i-1]);
	}
}

int main(){
	char s[] = "REVERSE";
	cout << s << endl;
	reverse(s);
	cout << s << endl;
	return 0;
}