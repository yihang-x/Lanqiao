#include<iostream>
using namespace std;
int main(){
    int a ,b, c, d, e ,f;
    cin >> a >> b >> c;
    d = (a + c - b) /2;
    e = (a + b - c) /2;
    f = (b + c - a) /2;
    cout << d <<endl;
    cout << e <<endl;
    cout << f <<endl;
    return 0; 
}