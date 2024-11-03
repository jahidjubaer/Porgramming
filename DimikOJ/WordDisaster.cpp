///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'



int sp_len(char ch[], int len){
	int sp = 0;
	for(int i = 0; i < len; i++){
		if(ch[i] == ' '){
			sp++;
		}
	}
	return sp;
	
}

void len_re(char ch[], int len, int a[]){
	int index = 0;
	for(int i = 0; i < len; i++){
		if(ch[i] == ' ') {
			a[index] = i;
			index++;
		}
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
		
		int len_of = sp_len(ch, len);
		char s[1005];

		int a[len_of];
		len_re(ch, len, a);

		int pre_len = 0;
		for(int i = 0; i <len_of; i++){
			reverse(ch + pre_len, ch + a[i] );	
			pre_len = a[i] + 1;

		}

		reverse(ch + pre_len, ch + len);

		cout << ch << endl;

	} 
	
	return 0;	
}