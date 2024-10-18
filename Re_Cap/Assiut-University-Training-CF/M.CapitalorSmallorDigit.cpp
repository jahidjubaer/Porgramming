///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// char ch [10];
	// cin >> ch;

	// if(ch[0] - 0 >= 65 && ch[0] - 0 <= 96){
	// 	cout << "ALPHA" << endl << "IS CAPITAL" << endl;
	// }
	// else if(ch[0] - 0 >= 97 && ch[0] - 0 <= 123){
	// 	cout << "ALPHA" << endl << "IS SMALL" << endl;
	// }
	// else {
	// 	cout << "IS DIGIT" << endl;
	// }

	char ch; cin >> ch;
	int n = (int) ch;

	if(isalpha(n)){
		cout << "ALPHA" << endl;
		if(isupper(n)){
			cout << "IS CAPITAL" << endl;
		}
		else{
			cout << "IS SMALL" << endl;
		}
	}
	else{
		cout << "IS DIGIT" << endl;
	}


	return 0;	
}