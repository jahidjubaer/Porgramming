///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		double a, b, c;
		cin >> a >> b >> c;

		double s =  (a + b + c) / 2;
		double A = sqrt(s * (s - a) * (s -b) * (s - c));
		cout << fixed << setprecision(3) << "Area = " <<  A << endl;
	}
	
	return 0;	
}