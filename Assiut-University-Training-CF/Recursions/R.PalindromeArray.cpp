///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int n;
const int N = 1e5 + 9;
int a[N];
bool is_palindrome = true;

void palindrome(int i){
	if(i == n / 2) return;
	if(a[i] != a[n - 1 - i]) is_palindrome = false;
	palindrome(i + 1);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 
	palindrome(0);
	if(is_palindrome) cout << "YES" << endl;
	else cout << "NO" << endl;
 
	
	return 0;	
}