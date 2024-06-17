// pattern print    
    
// A B C D
//  A B C D
//  A B C D

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
            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;        
    }
}

