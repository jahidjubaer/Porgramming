///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char f_name1[1000], s_name1[1000], f_name2[1000], s_name2[1000];
	cin >> f_name1 >> s_name1;
	cin >> f_name2 >> s_name2;
	int len1 = strlen(s_name1);
	int len2 = strlen(s_name2);

	bool is_brother = true;
	if(len1 != len2){
		cout << "NOT" << endl;
		return 0;
	} 
	
	for(int i = 0; i < len1; i++){
		if(s_name1[i] != s_name2[i]){
			is_brother = false;
			break;
		}
	}

	if(is_brother) cout << "ARE Brothers" << endl;
	else{
		cout << "NOT" << endl;
	}
	
	return 0;	
}