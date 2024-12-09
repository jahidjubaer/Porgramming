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

	// if(a <= b and a <= c){
	// 	cout << a << " ";
	// }
	// else if(b <= c and b <= a){
	// 	cout << b << " ";
	// }
	// else {
	// 	cout << c << " ";
	// }

	// if(a >= b and a >= c){
	// 	cout << a << endl;
	// } 
	// else if(b >= c and b >= a){
	// 	cout << b << endl;
	// }
	// else {
	// 	cout << c << endl;
	// }

	int mini = min(c , min(a, b));
	int mac = max (c , max(a, b));

	cout << mini << " " << mac << endl;


	
	return 0;	
}