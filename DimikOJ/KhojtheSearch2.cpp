///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;cin >> t;
	while(t--){
		char m_string[1005];
	cin >> m_string;
	char sub_stirng[1005];
	cin >> sub_stirng;
	int m_len = strlen(m_string);
	int sub_len = strlen(sub_stirng);
	int cnt = 0;
	for(int start = 0; start + sub_len - 1 < m_len; start++){
		bool is_equal = true;
		for(int i = 0; i < sub_len; i++){
			if(sub_stirng[i] != m_string[start + i]){
				is_equal = false;
			}
		}

		if(is_equal){
			cnt++;
		}
	}

		cout << cnt << endl;
	}
	

	 
	
	return 0;	
}