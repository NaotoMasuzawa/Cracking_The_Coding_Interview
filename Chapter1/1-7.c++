#include <iostream>
using namespace std;

int main(){
    
    int m;
    int n;
    cout << "Enter the m." <<endl;
    cin >> m;
    cout << "Enter the n." << endl;
    cin >> n;
    
    int x[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter the x[" << i + 1 << "][" << j + 1<< "]" << endl;
            cin >> x[i][j];
        }
    }
    int check[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            check[i][j] = 0;
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(x[i][j] == 0 && check[i][j] == 0){
                //delete col
                for(int k = 0; k < m; k++){
                        x[k][j] = 0;
                        check[k][j] = 1;
                }
                //delete row
                for(int l = 0; l < n; l++){
                    x[i][l] = 0;
                    check[i][l] = 1;
                }
            }
        }
    }
    cout << "After the processing." << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("x[%d][%d]\n", i+1, j+1);
            cout << x[i][j] << endl;
        }
    }
    return 0;
}