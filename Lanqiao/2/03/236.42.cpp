#include<iostream>
using namespace std;
int main(){
    char cc ;
    cin >> cc ;
    char c1;
    char c2;
    c1 = cc - 'a' + 'A';
    c2 = cc - 'A' + 'a';
    if (('a' <= cc) && (cc <= 'z'))
    {
        cout << c1 <<  endl;
    }
    if (('A'<= cc) && (cc <= 'Z'))
    {
        cout << c2 <<  endl;
    }
    return 0;
}