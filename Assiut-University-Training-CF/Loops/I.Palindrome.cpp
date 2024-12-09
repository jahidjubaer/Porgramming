///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	char ch[100];
	cin >> ch;
	int n = strlen(ch);

	int rev = n - 1;

	bool is_plindrome = true;

	for(int i = 0; i < n / 2; i++){
		if(ch[i] != ch[rev]){
			is_plindrome = false;
		}
		rev--;
	}
	
	if(is_plindrome){
		cout << ch << endl << "YES" << endl;
	}
	else{
		int inx = 0;
		for(int i = n -1 ; i >= 0; i--){
				if(ch[i] != '0') {
					inx = i;
					break;
				}
		}

		for(int i = inx; i >= 0; i--){
			cout << ch[i];
		}
		cout << endl << "NO" << endl;
	}
	
	return 0;	
}
