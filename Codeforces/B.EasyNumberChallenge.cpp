///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e6 + 9;
const int mod = 1073741824;
int d[N];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for(int i = 1; i <= N; i++){
		for(int j = i; j <= N; j += i){
			d[j]++;
		}
	}

	int a, b, c;
	cin >> a >> b >> c;

	int n;
	ll result = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			for(int k = 1; k <= c; k++){
				n = i * j * k;
				result = (result % mod +  d[n]) % mod;
			}
		}
	}
	cout << result << endl;

	
	
	return 0;	
}