// pattern print    
    
// 1
// 2 1
// 3 2 1 
// 4 3 2 1

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
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;        
    }
}

