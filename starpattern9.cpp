// pattern print    
    
// A 
//  B B 
//  C C C

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    int count = 1;
    while (row<=n){
        int col = 1;
        while (col<=row) {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;        
    }
}

