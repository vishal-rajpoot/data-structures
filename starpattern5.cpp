// pattern print  with diffrent logic  
    
// 1
// 2 3
// 3 4 5 
// 4 5 6 7

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
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        row++;        
    }
}

