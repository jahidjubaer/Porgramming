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
	while(n--){
		int t;
	cin >> t;

	int cnt = 0;
	while(t > 0){
		int rem = t % 2;
		if(rem == 1){
			cnt++;
		}
		t /= 2;
	} 

	int dis = 1;
	for(int i = 1; i <= cnt; i++){
		dis *= 2;
	}
	cout << dis - 1 << endl;
	}
	
	
	
	return 0;	
}