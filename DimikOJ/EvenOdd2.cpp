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
 		char ch[101];
 		cin >> ch;
 		int len = strlen(ch);

 		int last_digit = ch[len-1] - '0';
 		if(last_digit % 2 == 0){
 			cout << "even" << endl;
 		}
 		else{
 			cout << "odd" << endl;
 		}

 	}
	
	return 0;	
}