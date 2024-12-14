///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void rowswap(int a[][1009], int x, int y, int n) {
    for (int j = 0; j < n; j++) {
        swap(a[x][j], a[y][j]);
    }
}

void colswap(int a[][1009], int x, int y, int n) {
    for (int i = 0; i < n; i++) {
        swap(a[i][x], a[i][y]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;
    x -= 1, y -= 1; 

    int a[1009][1009]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    rowswap(a, x, y, n);
    colswap(a, x, y, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;    
}
