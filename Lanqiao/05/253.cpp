#include<iostream>
using namespace std;
int main(){
    double a, b, c, d, e, maxn;
    cin >> a >> b >> c >> d >> e;
    maxn = a;
    if (b > maxn)
    {
        maxn = b;
    }
    if (c > maxn)
    {
        maxn = c;
    }   
    if (d > maxn)
    {
        maxn = d;
    }
    if (e > maxn)
    {
        maxn = e;
    }
    cout << maxn << endl;
    return 0;
}