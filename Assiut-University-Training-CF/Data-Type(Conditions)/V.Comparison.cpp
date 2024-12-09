///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	char s;
	cin >> a >> s >> b;

	if(s == '>' && a > b){
		cout << "Right" << endl;
	}
	else if(s == '<' && a < b){
		cout << "Right" << endl;
	}
	else if(s == '=' && a == b){
		cout << "Right" << endl;
	}
	else{
		cout << "Wrong" << endl;
	}

		
	return 0;	
}