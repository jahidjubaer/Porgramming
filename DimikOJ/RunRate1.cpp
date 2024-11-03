#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while(t--) {
		float target, run, ball_left;
		cin >> target >> run >> ball_left;
		

		float r_run_rate,r_run;
        float need_run = target + 1 - run;
 		if(target >= run){
        		r_run_rate = need_run / (ball_left / 6.0);
        }
        else{
        	r_run_rate = 0;
        }
        

		float play_ball, net_run_rate;
		play_ball = 300 - ball_left;

        net_run_rate = run / (play_ball / 6.0);

		cout << fixed << setprecision(2) << net_run_rate << " " << r_run_rate << endl;
	}

    return 0;
}