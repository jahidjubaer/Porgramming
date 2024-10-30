///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int number = 996;
	for(int i = 1000; i >= 1; i--){
		cout << i << ' ';
		if(i == number){
			cout << endl;
			number -= 5;
		}
	} 
	
	return 0;	
}