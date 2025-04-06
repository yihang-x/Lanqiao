#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double x;
    int y;
    cin >> x >> y;
    double n;
    n =  (20 * x + 17 * y) / (20 + 17);
    cout << fixed << setprecision(2) << n << endl;
    return 0;
}                        