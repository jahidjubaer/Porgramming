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

	int b[n];
	for(int i = 0; i < n; i++){
		b[i] = a[i];
	}

	sort(a, a + n);
	int mini = a[0];
	cout << mini << ' ';
	for(int i = 0; i < n;i++){
		if(mini == b[i]){
			cout << i + 1<< endl;
			return 0;
		}
	}

	
	
	return 0;	
}