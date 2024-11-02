#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int sq = (a * a) + (b * b) ;

    if(sq < c * c) {
        cout << "Yes" << endl ;
    }
    else {
        cout << "No" << endl;
    }
}
