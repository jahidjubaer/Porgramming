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
 		char ch;
 		cin >> ch;

 		if(isalpha(ch)){
 			if(islower(ch)){
 				cout << "Lowercase Character" << endl;
 			}
 			else if(isupper(ch)){
 				cout << "Uppercase Character" << endl;
 			}
 		}
 		else if(isdigit(ch)){
 			cout << "Numerical Digit" << endl;
 		}
 		else{
 			cout << "Special Characters" << endl;
 		}
 	}
	
	return 0;	
}