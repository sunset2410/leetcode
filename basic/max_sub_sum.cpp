// tìm dãy con liên tiếp có tổng lớn nhất
// https://canhminhdo.github.io/tim-day-con-lient-tiep-co-tong-lon-nhat/


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

// o(n^3)
// void Solve()
// {
// 	int i,j,k, sum = 0;
// 	for (i = 0; i < N; i++) {
// 		for (j = i; j < N; j++) {
// 				sum = 0;
// 				for (k = i ; k <= j; k++) {
// 					sum += D[k];
// 				}
// 				if (sol < sum) {
// 					sol = sum;
// 				}
// 			}	
// 	}
// }


void Solve()
{
	int i,j,k, sum = 0;
	for (i = 0; i < N; i++) {
		for (j = i; j < N; j++) {
				sum = 0;
				for (k = i ; k <= j; k++) {
					sum += D[k];
				}
				if (sol < sum) {
					sol = sum;
				}
			}	
	}
}


int main(){
	InputData();//Input function
	Solve();
	cout << sol << endl;//Output
	return 0;
}