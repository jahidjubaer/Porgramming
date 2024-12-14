///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

void even_indices(int a[], int n){
	if(n < 0) return;
	if(n % 2 == 0){
		cout << a[n] << ' ';
	}
	even_indices(a, n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int n;
	 cin >> n;
	 int a[n];
	 for(int i = 0; i < n; i++){
	 	cin >> a[i];
	 }
	 even_indices(a, n - 1);
	
	return 0;	
}