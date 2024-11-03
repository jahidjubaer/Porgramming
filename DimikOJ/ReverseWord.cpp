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
		char ch[1004];
		cin >> ch;
		int len = strlen(ch);

		for(int i = len -1 ; i >= 0; i--){
			cout << ch[i] ;
		}
		cout << endl;
	}
	
	return 0;	
}