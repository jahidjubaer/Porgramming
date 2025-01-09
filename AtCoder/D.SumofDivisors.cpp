///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e7 + 9;
int D[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for(int i = 1; i <= N; i++){
		for(int j = i; j <= N; j += i){
			D[j]++;
		}
	} 

	int n;
	cin >> n;
	ll sum_d  = 0;
	for(int i = 1; i <= n; i++){
		sum_d += (ll) i * D[i];
	}
	cout << sum_d << endl;
	
	return 0;	
}

