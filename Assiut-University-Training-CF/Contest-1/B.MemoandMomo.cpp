///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, k;
	cin >> a >> b >> k;
	if(a % k == 0 && b % k == 0){
		cout << "Both" << endl;
	} 
	else if(a % k == 0 && b % k != 0){
		cout << "Memo" << endl;
	}
	else if(b % k == 0 && a % k != 0){
		cout << "Momo" << endl;
	}
	else{
		cout << "No one" << endl;
	}
	
	return 0;	
}