///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	n = n / 1000;
	if(n % 2 == 0){
		cout << "EVEN" << endl;
	} 
	else{
		cout << "ODD" << endl;
	}
	
	return 0;	
}