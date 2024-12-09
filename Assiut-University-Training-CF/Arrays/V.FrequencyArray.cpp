///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int n , m;
    cin >> n >> m ;
    int a[n+1] ;
    for(int i = 1; i <= n; i++) {
        cin >> a[i] ;
    }

    int freq[m+1] ;
    for(int i = 1; i <= m; i++) {
        freq[i] = 0 ;
    }
    for(int i = 1; i <= n ; i++) {
        freq[a[i]]++ ;

    }
    for(int i = 1 ; i <= m ; i++) {
        cout << freq[i] << endl ;
    } 
	
	return 0;	
}