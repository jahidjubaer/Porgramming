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
 	for(int i = 0; i < n; i++){
 		cin >> a[i];
 	}

 	sort(a, a + n -1);
 	int mini = a[0];

 	int cnt = 0;
 	for(int i = 0; i < n; i++){
 		if(mini == a[i]){
 			cnt++;
 		}
 	}

 	if(cnt % 2 == 1){
 		cout << "Lucky" << endl;
 	}
 	else{
 		cout << "Unlucky" << endl;
 	}
	
	return 0;	
}