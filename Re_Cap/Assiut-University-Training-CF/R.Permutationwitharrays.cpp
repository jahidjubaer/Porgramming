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
	int b[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}

	//sort array
	sort(a, a + n );
	sort(b, b + n );


	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	
	return 0;	
}