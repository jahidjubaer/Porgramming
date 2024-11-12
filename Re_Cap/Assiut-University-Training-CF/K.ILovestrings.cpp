///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n ;
    cin >> n ;

    char s[52] , t[52] ;

    while(n--) {
        cin >> s >> t ;


        int len1 = strlen(s) ;
        int len2 = strlen(t) ;
        for(int i = 0 ; i < max(len1, len2); i++){
            if(i < len1) {
                cout << s[i] ;
            }
            if(i < len2) {
                cout << t[i] ;
            }
        }
        cout << endl ;
    }
	
	return 0;	
}