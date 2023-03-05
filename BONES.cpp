#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int cnt[100];
int sum = 0;
int dem = 0;

// int main() {
//     freopen("INP.TXT", "r", stdin);
//     int s1, s2, s3;
//     cin >> s1 >> s2 >> s3;
//     for (int i = 1; i <= s1; i++)
//         for (int j = 1; j <= s2; j++)
//             for (int k = 1; k <= s3; k++) {
//                 cnt[i+j+k]++;
//                 if ((cnt[i+j+k] > dem) ||((cnt[i+j+k] == dem) && (sum > i + j +k))) {
//                     dem = cnt[i+j+k];
//                     sum = i+j+k;
//                 }
//             }
//     cout << sum <<endl;
//     return 0;
// }