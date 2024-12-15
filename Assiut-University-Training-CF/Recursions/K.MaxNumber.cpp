///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int maxi = -1e9;
const int N = 1000;
int a[N], n;


// void maxi_number(int a[], int n){
// 	if(n < 0) return;
// 	if(a[n] > maxi) maxi = a[n];
// 	maxi_number(a, n - 1);
// }

int maxi_number(int i){
	if(i > n) return maxi;
	return max(a[i] , maxi_number(i + 1));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 

	// maxi_number(a, n - 1);
	// cout << maxi << endl;
	cout << maxi_number(0) << endl;
	
	return 0;	
}