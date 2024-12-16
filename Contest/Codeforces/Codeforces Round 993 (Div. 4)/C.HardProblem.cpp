///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		int m, a, b, c;
		cin >> m >> a >> b >> c;

		int seat_cnt = 0;
		int total_seat = m + m;
		int seat_left = 0;
		if(a >= m) seat_cnt += m;
		else {
			seat_cnt += a;
			seat_left += m - a;
		}
		if(b >= m) seat_cnt += m;
		else{
			seat_cnt += b;
			seat_left += m - b;
		}

		
		
		if(seat_left > c) {
			seat_cnt += c;
		}
		else{
			seat_cnt += seat_left;
		}

		cout << seat_cnt << endl;

	} 
	
	return 0;	
}