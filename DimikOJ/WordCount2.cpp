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
	cin.ignore();

	while(t--){
		char ch[10006];
		cin.getline(ch, 10006);
		int len = strlen(ch);

		int cnt = 1;
		for(int i = 0; i < len; i++){
			if(ch[i] == ' ') cnt++;
		}
		cout << "Count = " << cnt << endl;
	} 
	
	return 0;	
}