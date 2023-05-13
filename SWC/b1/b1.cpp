#include <stdio.h>
// tim day con lien tiep co tong lon nhat
int N;//Number of sponsored goods
int D[100000 + 10];//Preference
int sol = -30001;//Maximum preference of the first method
int gStart = 0, gEnd = 0;
void InputData(void) {
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &D[i]);
	}
}

void Solve(void)
{
	int start = 0, end = 0;
	sol = D[0];
	int i, pre_sum = 0;
	for (i = 0; i <= N - 1; i++) {
		if (pre_sum + D[i] > sol) {
			sol = pre_sum + D[i];
			gStart = start;
			gEnd = i;
		}
		
		pre_sum += D[i];

		if (pre_sum < 0) {
			pre_sum = 0;
			if(start + i <= N -1)
				start = i + 1;
		}
		
		
	}
}


int main(void) {
	freopen("input.txt", "r", stdin);
	InputData();//Input function
	Solve();
	printf("%d\n", sol);//Output
	printf("start: %d\n", gStart);//Output
	printf("end: %d\n", gEnd);//Outputend
	return 0;
}