///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int index(char ch[], int len){
	for(int i = 0; i < len; i++){
		if(ch[i] == '0'){
			return i;
			return 0;
		}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 1e5 + 10;
	
	char ch[n];
	cin >> ch;
	int len = strlen(ch);

	int ind = index(ch, len);

	if(ind != 0){
		for(int i = 0; i < len ; i++){
			
			if(i == ind) continue;
			else{
				cout << ch[i] - '0';
			}
		}
	}
	else{
		for(int i = 0; i < len - 1; i++){
			cout << ch[i] - '0';
		}
	}
	cout << endl;
	
	return 0;	
}