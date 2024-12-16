///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int len = 0;

void sequence(int n){
	len++;
	if(n <= 1) return;
	if(n % 2 == 1) {
		n = 3 * n + 1;
	}
	else{
		n = n / 2;
	}
	
	sequence(n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	sequence(n); 
	cout << len << endl;
	
	return 0;	
}