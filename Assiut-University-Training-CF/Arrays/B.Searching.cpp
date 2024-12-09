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
	int a[n];
 	for(int i = 0; i < n; i++){
 		cin >> a[i];
 	}
 	int find;
 	cin >> find;

 	for(int i = 0; i < n; i++){
 		if(a[i] == find){
 			cout << i << endl;
 			return 0;
 		}
 	}
	
	cout << -1 << endl;
	
	return 0;	
}