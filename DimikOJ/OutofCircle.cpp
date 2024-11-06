///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int dist(int circle_x, int circle_y, int outer_x, int outer_y){
		int dis = sqrt((ll)(circle_x - outer_x) * (circle_x - outer_x) + (ll) (circle_y - outer_y) * (circle_y - outer_y));
		return dis;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	 int t;
	 cin >> t;
	 while(t--){
	 	int circle_x, circle_y;
	 	cin >> circle_x >> circle_y;
	 	int radius;
	 	cin >> radius;
	 	int outer_x, outer_y;
	 	cin >> outer_x >> outer_y;

	 	int dis = dist(circle_x, circle_y, outer_x, outer_y);

	 	if(dis <= radius){
	 		cout << "The point is inside the circle" << endl;
	 	} 
	 	else{
	 		cout << "The point is not inside the circle" << endl;
	 	}
	 }
	
	return 0;	
}