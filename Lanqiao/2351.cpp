#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a , b , c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << s << endl;
    return 0;
}