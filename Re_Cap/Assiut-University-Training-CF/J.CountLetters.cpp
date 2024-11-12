///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
const int N = 1e7 + 9;
char ch[N];
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	cin >> ch;
	int len = strlen(ch);
 
	int freq[26] = {0};
 
	for(int i = 0; i < len; i++){
		freq[ch[i] - 'a']++;
	}
 
	for(char c = 'a'; c <= 'z'; c++){
		int cr = c - 'a';
		if(freq[cr] > 0){
			cout << c << " : " << freq[cr] << endl;
		}
	}
	return 0;	
}