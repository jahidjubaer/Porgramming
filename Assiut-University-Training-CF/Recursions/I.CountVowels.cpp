///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
int cnt = 0;
void vowel_count(char ch[], int len){

	if(len < 0){
		return;
	}

	if(ch[len] == 'a' || ch[len] == 'e' || ch[len] == 'i' || ch[len] == 'o' || ch[len] == 'u' ){
		cnt++;
	}

	 vowel_count(ch, len - 1);


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char ch[205];
	cin.getline(ch, 205);
	int len = strlen(ch);
	for(int i = 0; i <len; i++){
		ch[i] = tolower(ch[i]);
	}

	vowel_count(ch, len - 1);
	cout << cnt << endl;
	
	return 0;	
}