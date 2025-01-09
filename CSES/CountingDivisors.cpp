///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e6 + 9;
int d[N];


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for(int i = 1; i <= N; i++){
		for(int j = i; j <= N; j += i){
			d[j]++;
		}
	}  

	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		cout << d[n] << endl;
	}
	
	return 0;	
}