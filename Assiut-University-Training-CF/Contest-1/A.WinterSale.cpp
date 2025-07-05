///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int discount, dis_price;
	cin >> discount >> dis_price;

	int percent = 100 - discount;
	double Price = (double) (dis_price * 100) / percent;
	cout << fixed << setprecision(2) << Price << endl; 

	
	return 0;	
}