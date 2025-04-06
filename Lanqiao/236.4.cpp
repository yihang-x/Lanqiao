#include<iostream>
using namespace std;
int main(){
    char cc = 'z';
    char CC = 'Z';
    cout << cc << " " << CC << endl;
    char c1;
    char c2;
    c1 = cc - 'a' + 'A';
    c2 = CC - 'A' + 'a';
    cout << c1 << " " << c2 << endl;
    return 0;
}