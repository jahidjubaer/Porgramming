///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int maximum(int a[], int n){

	int maxi = -1;
	for(int i = 0; i < n; i++){
		maxi = max(maxi, a[i]);
	}
	return maxi;
}

int minimum(int a[], int n){
	int mini = 1000;
	for(int i = 0; i < n; i++){
		mini = min(mini, a[i]);
	}
	return mini;
}

bool is_prime(int n){
	if(n == 1 ) return false;
	if(n == 2) return true;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int div_cnt(int n){
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			cnt++;
		}
	}
	return cnt;
}

bool is_palindrome(int n){
	if(n < 10) return true;
	int first_digit = n / 10;
	int last_digit = n % 10;

	if(first_digit == last_digit) return true;
	return false;
}

int prime(int a[], int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(is_prime(a[i])){
			cnt ++;
		}
	}
	return cnt;
}

int palindrome(int a[], int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(is_palindrome(a[i])){
			cnt++;
		}
	}
	return cnt;
}

int divisors(int a[], int n) {
    int max_divisors = 0;
    int num_with_max_divisors = a[0];

    for (int i = 0; i < n; i++) {
        int divisors_count = div_cnt(a[i]);
        if (divisors_count > max_divisors || 
           (divisors_count == max_divisors && a[i] > num_with_max_divisors)) {
            max_divisors = divisors_count;
            num_with_max_divisors = a[i];
        }
    }
    return num_with_max_divisors;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	cout << "The maximum number : " << maximum(a, n) << endl;
	cout << "The minimum number : " << minimum(a, n) << endl;
	cout << "The number of prime numbers : " << prime(a, n) << endl;
	cout << "The number of palindrome numbers : " << palindrome(a, n) << endl;
	cout << "The number that has the maximum number of divisors : " << divisors(a, n) << endl;





	 
	
	return 0;	
}