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
	if(a < b) swap(a, b);

	if(a == b){
		cout << a + b << endl;
	} 
	else{
		cout << a + a - 1 << endl;
	}
	
	return 0;	
}