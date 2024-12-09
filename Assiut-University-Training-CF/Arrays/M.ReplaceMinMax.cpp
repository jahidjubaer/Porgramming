///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;cin >> n;
	int a[n];


	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 

	int maxi = a[0];
	int mini = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > maxi){
			maxi = a[i];
		}
		if(a[i] < mini){
			mini = a[i];
		}
	}

	
	for(int i = 0; i < n; i++){
		if(a[i] == mini){
			a[i] = maxi;
			continue;
		}
		if(a[i] == maxi){
			a[i] = mini;
			continue;
		}
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;


	return 0;	
}