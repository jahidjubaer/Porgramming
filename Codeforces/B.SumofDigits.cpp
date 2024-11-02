///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int sum_of_digit(int n){

	int sum = 0;
	while(n > 0){
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}
	return sum ;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char ch[100005];
	cin >> ch;
	int len = strlen(ch);
	if(len == 1){
		cout << 0 << endl;
		return 0;
	}

	int sum = 0;
	int cnt = 0;

	for(int i = 0; i < len; i++){
		sum += ch[i] - '0';
	}  
	cnt++;

	int n = sum;
	while(n > 9){
		n = sum_of_digit(n);
		cnt++;
	}

	cout << cnt << endl;
	
	return 0;	
}