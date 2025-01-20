///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int d = (b * b) - (4 * a * c);
	if(d < 0) {
		cout << "No roots" << endl;
	}
	else if(d == 0) {
		cout << "One root: " << (-1 * b) / (2 * a) << endl;
	}
	else{
		int x, y;
		x = (-1 * b - sqrt(d)) / (2 * a );
		y = (-1 * b + sqrt(d)) / (2 * a);
		if(x > y ) swap(x, y);
		cout << "Two roots: " << x  << ' ' << y << endl;
	}
	
	return 0;	
}

