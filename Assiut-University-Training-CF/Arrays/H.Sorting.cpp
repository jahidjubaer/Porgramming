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

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	
	return 0;	
}