///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

bool is_beautiful(int year){

	int a[4];
	int index = 0;
	while(year > 0){
		int last_digit = year % 10;
		a[index] = last_digit;
		index++;
		year /= 10;
	}

	for(int i = 0; i < 4; i++){
		for(int j = i + 1; j < 4; j++){
			if(a[i] == a[j]){
				return false;
			return 0;
			}

			 
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int year;
	cin >> year;

	while(true){
		if(is_beautiful(year + 1)){
			cout << year + 1 << endl;
			return 0;
		}
		year++;
	}


	
	return 0;	
}