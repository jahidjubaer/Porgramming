///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool is_palindrome(char ch[], int len){

	for(int i = 0; i < len; i++){
		if(ch[i] != ch[len - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		char ch[1005];
		cin >> ch;
		int len = strlen(ch);

		if(is_palindrome(ch, len)){
			cout << "Yes! It is palindrome!" << endl;
		}
		else{
			cout << "Sorry! It is not palindrome!" << endl;
		}

	} 
	
	return 0;	
}