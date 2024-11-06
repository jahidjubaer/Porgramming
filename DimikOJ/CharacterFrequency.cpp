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
		char ch[10005];
		cin.getline(ch, 10005);
		int len = strlen(ch);

		char char1;
		cin >> char1;
		cin.ignore();

		int freq = 0;
		for(int i = 0; i < len; i++){
			if(ch[i] == char1){
				freq++;
			}
		}

		if(freq == 0){
			cout << "'" << char1 << "' is not present" << endl;
		}
		else{
			cout << "Occurrence of '" << char1 << "' in '" << ch << "' = " << freq << endl;
		}

		


	} 

	
	return 0;	
}