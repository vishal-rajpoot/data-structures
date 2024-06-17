// pattern print    
    
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (~a) << endl;
    cout << (a^b) << endl;
    
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

}

