#include <iostream>
using namespace std;

int N;//Number of sponsored goods
int D[100000 + 10];//Preference
int sol = -30001;//Maximum preference of the first method

void InputData(){
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> D[i];
	}
}

void Solve()
{
	sol = D[0];
	int i, pre_sum = 0;
	for (i = 0; i <= N - 1; i++) {
		if (pre_sum + D[i] > sol) {
			sol = pre_sum + D[i];
		}
		
		pre_sum += D[i];

		if (pre_sum < 0) {
			pre_sum = 0;
		}
		
		
	}
}


int main(){
	InputData();//Input function
	Solve();
	cout << sol << endl;//Output
	return 0;
}