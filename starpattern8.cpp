// pattern print    
    
// A B C D
//  B C D E
//  C D E F

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
        while (col<=n) {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;        
    }
}

