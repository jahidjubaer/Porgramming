///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	double div = (double) a / b;

	cout << "floor " << a << " / " << b << " = " << floor(div) << endl;
	cout << "ceil " << a << " / " << b << " = " << ceil(div) << endl;
	cout << "round " << a << " / " << b << " = " << round(div) << endl;
	
	return 0;	
}