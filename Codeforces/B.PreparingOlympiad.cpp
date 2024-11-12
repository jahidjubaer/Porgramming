///__________JAHID_________///
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int number, max_rating , min_rating, rating_diff;
	cin >> number >> min_rating >> max_rating >> rating_diff;

	int a[number];
	for(int i = 0; i < number; i++){
		cin >> a[i];
	} 

	sort(a, a + number - 1);

	int problem_set = 0;
	for(int mask = 0; mask  < (1 << number); mask++){
		int sub_array_ele_cnt = 0 ;
		int sum_of_ele = 0;
		int max_dif = -1e7 + 1;
		int min_dif = 1e7 + 1;
		
		for(int i = 0; i < number; i++){
			if(((mask >> i) & 1) ){
				
				sum_of_ele += a[i];
				sub_array_ele_cnt++;
				min_dif = min(min_dif, a[i]);
				max_dif = max(max_dif, a[i]);

			}
		}
		if(sub_array_ele_cnt >= 2 and sum_of_ele >= min_rating and sum_of_ele <= max_rating and max_dif - min_dif >= rating_diff){
			problem_set++;
		}
	}

	cout << problem_set << endl;
	
	return 0;	
}