// pattern print    
    
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    while (row<=n){
        int col = 1;
        while (col<=(n-row+1)) {
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        row++;        
    }
}

