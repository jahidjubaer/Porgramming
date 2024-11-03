///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool is_vowel(char ch){
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	cin.ignore();

	while(t--){
		char ch[1005];
    	cin.getline(ch, 1005);

    	int len = strlen(ch);
    	for (int i = 0; i < len; i++) {
        		ch[i] = tolower(ch[i]);
    	}

		int cnt = 0;
		for(int i = 0; i < len; i++){
			if(is_vowel(ch[i])){
				cnt++;
			}
		}

		cout << "Number of vowels = " << cnt << endl;
	} 
	
	return 0;	
}