///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

const int n = 1e6 + 6 ;
char s[n] ;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin.getline(s, n ) ;

    int len = strlen(s) ;
    int sum = 0 ;

    for(int i = 0 ; i < len ; i++) {
        sum += s[i] - '0' ;
    }
    cout << sum << endl ; 
	
	return 0;	
}