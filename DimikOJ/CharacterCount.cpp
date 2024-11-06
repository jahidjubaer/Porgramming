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
		char ch[1005];
	cin >> ch;
	int len = strlen(ch);
	
	int count[26];
	for(char c = 'a'; c <= 'z'; c++){
		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(c == ch[i]){
				cnt++;
			}
		}
		count[c - 'a'] = cnt;

	}

	bool is_printed[26];
	for(int i = 0; i < 26; i++){
		is_printed[i] = false;
	}
	for(int i = 0; i < len; i++){
		if(!is_printed[ch[i] - 'a']){
			cout << ch[i] << " = " << count[ch[i] - 'a'] << endl;
		}
		is_printed[ch[i] - 'a'] = true;
		
	}
	if(t != 0){
		cout << endl;
	}
	}
	
	
	return 0;	
}