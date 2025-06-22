#include <iostream>

using namespace std;

int main(){
    char ch;
    cin >> ch;
    if( (ch >= 'A') && (ch <= 'Z')) {
        cout << "uppercase" << endl;
    }
    else if((ch >= 'a') && (ch <= 'z')) {
        cout << "lowercase" <<endl;
    }
    else if((ch >= '0') && (ch <= '9')) {
        cout << "number" << endl;
    }   
    else {
        cout << "other" << endl;
    }

    return 0;
}