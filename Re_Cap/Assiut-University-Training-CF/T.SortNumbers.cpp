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
	int mini = min(c,min(a,b));
	int maxi = max(c,max(a,b));
	int mid = (a + b + c) - (mini + maxi);
	cout << mini << endl << mid << endl << maxi << endl << endl;
	cout << a << endl << b << endl << c << endl;
	
	return 0;	
}