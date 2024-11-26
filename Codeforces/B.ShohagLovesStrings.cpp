///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e5 + 9;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		char s[N];
		cin >> s;
		int len = strlen(s);

		bool is_sub = false;

		for(int i = 0; i < len - 1; i++){
			if(s[i] == s[i + 1]){
				cout << s[i] << s[i + 1] << endl;
				is_sub = true;
				break;
			}
		}
		if(is_sub) continue;
		else{
			for(int i = 0; i < len - 2; i++){
			if(s[i])
			if((s[i] != s[i+1] and s[i] != s[i + 2]) and (s[i + 1] != s[i + 2])){
				cout << s[i] << s[i + 1] << s[i + 2] << endl;
				is_sub = true;
				break;
			}
		}
		}
		
		if(!is_sub) cout << -1 << endl;
	} 
	
	return 0;	
}