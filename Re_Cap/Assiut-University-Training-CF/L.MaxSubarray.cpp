///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int t;
	 cin >> t;
	 while(t--){
	 	int n;
	 	cin >> n;
	 	int a[n];
	 	for(int i = 0; i < n; i++){
	 		cin >> a[i];
	 	}

	 	for(int i = 0; i < n; i++){
	 		for(int j = i; j < n; j++){
	 			int max = -1e6;
	 			for(int k = i; k <= j; k++){
	 				if(max < a[k]){
	 					max = a[k];
	 				}
	 			}
	 			cout << max << ' ';
	 		}
	 	}
	 	cout << endl;
	 }
	
	return 0;	
}