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
		char ch[100];
		cin >> ch;
		int len = strlen(ch);
		for(int i = 0; i < len; i++){
			if(ch[i] == 'L'){
				ch[i] = ch[i - 1];
			}
			if(ch[i] == 'R'){
				ch[i] = ch[i + 1];
			}
		}

		cout << ch << endl;
	} 
	
	return 0;	
}