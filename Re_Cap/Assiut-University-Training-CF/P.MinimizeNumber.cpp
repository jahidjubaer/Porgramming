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

	 int cnt = 0;
	 while(true){
	 	bool is_even = true;
	 	// check all the element ar even or not
	 	for(int i = 0; i < n; i++){
	 		if(a[i] % 2 != 0){
	 			is_even = false;
	 			break;
	 		}
	 	}
	 	// if all the element are not even then break;
	 	if(!is_even) break;
	 	//if even then cnt++
	 	cnt++;

	 	// if all even then a[i] divide by 2;
	 	for(int i = 0; i < n; i++){
	 		a[i] = a[i] / 2;
	 	}
		
	 }

	 cout << cnt << endl;
	 
	return 0;	
}