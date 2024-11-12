///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n -1 ; i++){
        cin >> a[i];
    }

    sort(a , a + n - 1);

    for(int i = 0 ; i < n ; i++){
        if(a[i] != i + 1){
            cout << i + 1 << endl;
            return 0;
        }
    } 
	
	return 0;	
}