///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char s[1002] ;
    cin >> s ;



    int len = strlen(s) ;
    for(int i = 0 ; i < len ; i++) {
        int j = len - i - 1 ;
        if(s[i] !=  s[j]) {
            cout << "NO" ;
            return 0 ;
        }
    }
    cout << "YES" << endl; 
	
	return 0;	
}