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
		char ch[105];
		cin >> ch;
		int len = strlen(ch);

		for(int i = 0; i < len; i++){
			cout << ch[i] - '0' - 16 ;
		}
		cout << endl;
	} 
	
	return 0;	
}