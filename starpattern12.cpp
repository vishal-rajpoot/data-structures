// pattern print    
    
//   * 
//   * *
//  * * *
// * * * *

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    while (row<=n){
        int space = n-row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        while (col<=row) {
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        row++;        
    }
}

