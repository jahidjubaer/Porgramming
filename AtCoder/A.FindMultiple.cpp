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

	for(int i = a; i<= b ; i++){
		if(i % c == 0){
			cout << i << endl;
			return 0;
		}
		
	} 

	cout << -1 << endl;
	
	return 0;	
}