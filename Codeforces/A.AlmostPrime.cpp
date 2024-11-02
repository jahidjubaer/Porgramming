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
 	int prime_array[n];
 	int index = 0;

 	for(int i = 2; i <= n; i++){
 		bool is_prime = true;
 		for(int j = 2; j < i; j++){
 			if(i % j == 0){
 				is_prime = false;
 				break;
 			}
 		}
 		if(is_prime) {
 			prime_array[index] = i;
 			index++;
 		}
 	}

 	
 	int almost_prime = 0;
 	for(int i = 2; i <= n; i++){
 		int prime_div = 0;
 		for(int j = 0; j < index; j++){
 			
 			if(i >= prime_array[j] and i % prime_array[j] == 0){
 				
 				prime_div++;
 			}
 		}
 		
 		if(prime_div == 2){
 			almost_prime++;
 		}
 	}

 	cout << almost_prime << endl;
	
	return 0;	
}