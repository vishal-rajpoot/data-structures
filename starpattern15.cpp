// pattern print    
    
// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    while (row<=n){
        int space = 0;
        while(space<= row-2){
            cout << " ";
            space++;
        }
        int col = 1;
        while (col<=(n-row+1)) {
            cout << col + row - 1 ;
            col++;
        }
        cout << endl;
        row++;        
    }
}

