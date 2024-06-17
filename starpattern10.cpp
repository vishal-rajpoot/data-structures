// pattern print    
    
// A 
//  B C
//  C D E

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    while (row<=n){
        int col = 1;
        while (col<=row) {
            char ch = 'A' - row + col + n -1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;        
    }
}

