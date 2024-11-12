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
    char s[101] ;

    for(int i = 1 ; i <= n ; i++) {


    cin >> s ;

    int len = strlen(s) ;

    if( len > 10) {
        cout << s[0] << len -2 << s[len-1] << endl ;
    }
    else{
        cout << s << endl ;
    }
    } 
	
	return 0;	
}