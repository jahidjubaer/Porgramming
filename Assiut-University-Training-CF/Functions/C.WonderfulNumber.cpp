///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int wonder(int n){
	int bin_of_n[100];
	int i = 0;
	while(n > 0){
		int rem = n % 2;
		bin_of_n[i] = rem;
		i++;

		n /= 2;
	}

	bool wonder = true;
	for(int ind = 0; ind < i / 2; ind++){
		
		if(bin_of_n[ind] != bin_of_n[i - 1 - ind]){
			wonder = false;
			return wonder;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	if(n % 2 == 1 and wonder(n)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;	
}