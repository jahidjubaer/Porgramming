///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double n;
	cin >> n;

	if(n - (floor(n)) == 0){
		cout << "int " << n << endl;
	}
	else{
		cout << "float " << (int) n << ' ' << n - (floor(n)) << endl;
	}

	
	return 0;	
}