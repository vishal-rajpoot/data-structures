// pattern print    
    
//  1234
//  1234
//  1234

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your no: ";
    cin >> n;
    int i=1;
    while (i<=n){
        int j = 1;
        while (j<=n) {
            cout << n-j+1;
            j++;
        }
        cout << endl;
        i++;        
    }
    
}

