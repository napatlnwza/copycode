#include <iostream>
#include <string>
using namespace std;
// C++ style array hello world

int main() {
    // C++ style array
    string x = "Hello";
    
    for (int i=0;i< x.length();i++) {
        cout << x[i] << endl;
    }
    // c-style array
    char y[5] = {'H', 'e', 'l', 'l', 'o'};
    for (int j=0;j<5;j++) {
        cout << y[j];
    }
    return 0;
}