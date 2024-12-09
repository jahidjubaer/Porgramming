///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for(int n = a; n <= b; n++){

		int lucky = n;
		bool is_lucky = true;
		while(lucky > 0){
		int last_digit = lucky % 10;
		
		if(last_digit != 4 && last_digit != 7){
			is_lucky = false;
			break;
		}

		int number = lucky / 10;
		lucky = number;
	}

	if(is_lucky){
		cout << n << " ";
		cnt++;
	}
	}

	if(cnt == 0){
		cout << -1 << endl;
	}
	else{
		cout << endl;
	}
	
	return 0;	
}