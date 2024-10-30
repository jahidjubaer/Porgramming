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
		getchar();
		cin.getline(ch, 100);
		int len = strlen(ch);
		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(ch[i] == ' '){
				cnt++;
			}
		}
		cout << cnt << endl;
	} 
	
	return 0;	
}