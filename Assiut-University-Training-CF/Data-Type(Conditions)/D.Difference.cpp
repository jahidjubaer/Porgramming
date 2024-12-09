///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	long long x = ((long long) a * b) - ((long long)c * d);
	cout << "Difference = " << x << endl; 
	
	return 0;	
}