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
		char ch[10004];
		cin.getline(ch, 10004);
		int len = strlen(ch);
		int index = 0;
		while(index == ' '){
			index++;
		}
		int cnt = 1;
		for(int i = index + 1; i < len; i++){
			if(ch[i] == ' ' && isdigit(ch[i + 1]) || ch[i + 1] == '-'){
				cnt++;
			}
		}
		cout << cnt << endl;
		
	} 


	
	return 0;	
}