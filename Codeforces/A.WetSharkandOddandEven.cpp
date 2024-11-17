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

	 ll sum = 0;
	 for(int i = 0; i < n; i++){
	 	if(a[i] % 2 == 0){
	 		sum += a[i];
	 	}
	 }

	 int odd_number[n];
	 int index = 0;

	 for(int i = 0; i < n; i++){
	 	if(a[i] % 2 == 1){
	 		odd_number[index] = a[i];
	 		index++;
	 	}
	 }

	 sort(odd_number, odd_number + index);

	 if(index % 2 == 0){
	 	for(int i = 0; i < index; i++){
	 		sum += odd_number[i];
	 	}
	 }
	 else{
	 	for(int i = 1; i < index; i++){
	 		sum += odd_number[i];
	 	}
	 }

	cout << sum << endl;




	
	return 0;	
}