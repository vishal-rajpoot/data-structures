// pattern print    
    
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no : ";
    cin >> n;
    int row=1;
    while (row<=n){
        // one column 

        int col=1;
        while(col <= (n-row+1)){
            cout << col << " " ;
            col++;
        }  
        int star = 2;
        while(star <= row){
            cout << "*" << " ";
            star++;
        }

        // second column
        
        int star2 = 2;
        while(star2 <= row){
            cout << "*" << " ";
            star2++;
        }

        int col2 = n - row + 1;
        while(col2){
            cout <<col2 << " " ;
            col2--;
        }  
        
        cout << endl;   
        row++;
    }
}

