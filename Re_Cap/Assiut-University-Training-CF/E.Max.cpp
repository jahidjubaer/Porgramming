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
	int maxi = -1;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if(x > maxi){
			maxi = x;
		}
	} 
	cout << maxi << endl;
	
	return 0;	
}