#include <iostream>
#include <fstream>
#include<iostream>
using namespace std;

// int main() {
//     ifstream myfile;
//     myfile.open("input/kadane.txt");
//     int N;
//     int a[100];
//     myfile >> N;
//     cout << "N = " << N << endl;
//     for ( int i = 0; i < N; i++) {
//         myfile >> a[i];
//     }
//     // SOLUTION
//     int sum_max = a[0];
//     int sum = 0;
//     int start = 0;
//     int end = 0;

//     for (int i = 0; i <= N-1; i++) {
//         sum += a[i];

//         if (sum > sum_max) {
//             sum_max = sum;
//             end = i;
//         }

//         if (sum <= 0) { // reset lai ko lay phan dau nua
//             start = i + 1;
//             end = start;
//             sum = 0;
//         }
//     }
//     cout << "sum_max:" <<sum_max <<endl;
//     myfile.close();
//     return 0;
// }