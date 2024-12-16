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
		char s[1009];
		cin >> s;
		int len = strlen(s);
		for(int i = 0; i < len; i++){
			if(s[i] == 'q') {
				s[i] = 'p';	
			} 
			else if(s[i] == 'p')
			{
				s[i] = 'q';
			} 
		}
		reverse(s, s + len );

		for(int i = 0; i < len; i++){
			cout << s[i];
		}
		cout << endl;

		
	} 
	
	return 0;	
}