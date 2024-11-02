#include <bits/stdc++.h>

using namespace std;

int main ()
{
    double a, b;
    cin >> a >> b;

    double sell = b / a * 100 ;
    double discount = 100 - sell ;

    cout << discount << endl ;
}
