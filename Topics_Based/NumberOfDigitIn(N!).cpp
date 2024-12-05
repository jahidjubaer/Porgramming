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

	//how ?
	//we have to find out number of digt in  n! where n < 100
	// log10(n) + 1 = number of digit in n ; how?
	// all the time we divide n by 10 and remove the right value until 0;
	// so log(n!) + 1 = number of digit in n!; n = 1,2,,3 ... n;
	// by using logb(a . c) = logb(a) + logb(c)
	// log(n!) = log10(1) + log10(2) + log10(3) + log10(4) ..... + log10(n);

	double digit = 0;
	for(int i = 1; i <= n; i++){
		digit += log10(i);
	}
	cout << floor(digit) + 1 << endl;
}