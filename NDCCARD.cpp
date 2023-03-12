#include<iostream>
#include<algorithm> // for min()
#include<utility> // for pair
using namespace std;

#define MAX_N 10000
#define MAX_M 30000
int N, M;
pair<int,int> F[MAX_M]; // luu index cua cap so
int a[MAX_N];
int ans = -1;

int main() {
    freopen("input/NDCCARD.txt", "r", stdin);
    cin >> N >> M;

    // nhap a[i]
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    //
    for (int i = 0;i < N; i++)
        for(int j = i+1; j < N; j++) {
            F[a[i] + a[j]] = {i,j};
        }
    
    //
    M = min(M,MAX_M);
    for (int i = 0; i < N; i++) { // voi moi gia tri i tim 1 cap so ket hop voi no de dc tong bo 3 lon nhat
        for (int j = M - a[i]; j>= 1; j--) {
            if(F[j] != pair<int,int>(0,0) && F[j].first != i && F[j].second != i) {
                ans = max(ans, a[i] + j);
                break; // voi moi so a[i] chi can tim dc cap bo so dau tien la cos the thoat                
            }
        }
    }

    cout << ans;
    return 0;
}