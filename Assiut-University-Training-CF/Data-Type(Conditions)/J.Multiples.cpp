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

	if(a % b == 0 || b % a == 0){
		cout << "Multiples" << endl;
	} 
	else{
		cout << "No Multiples" << endl;
	}
	
	return 0;	
}