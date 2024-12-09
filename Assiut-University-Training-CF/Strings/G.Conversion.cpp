///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

const int n = 1e5 + 3 ;
char s[n] ;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 cin.getline(s , n ) ;
    int len = strlen(s) ;

    for(int i = 0 ; i < len ; i++) {
        if(s[i] == ',') {
            s[i] = ' ' ;
        }
        if(isupper(s[i])) {
            s[i] = tolower(s[i]) ;
        }
        else {
            s[i] = toupper(s[i]) ;
        }
    }
    cout << s << endl ; 
	
	return 0;	
}