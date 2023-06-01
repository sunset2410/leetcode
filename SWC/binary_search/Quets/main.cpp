#include<bits/stdc++.h>
using namespace std;
int T;
typedef long long ll;
ll n, c, d;
ll sum[200005];

bool my_cmp(const int& a,const int& b) {
    return a > b;
}

int main() {
    freopen("in.txt","r",stdin);
    cin >> T;
    for (int t = 0; t< T; t++) {
        cin >> n >> c >> d;
        vector<ll> quests(n,0);
        for (ll j = 0; j< n; j++) {
            cin >> quests[j];
        }
        sort(quests.begin(), quests.end(), my_cmp);

        // tinh mang sum cong don
        sum[0] = 0;
        for(ll j = 0; j <quests.size(); j++) {
            sum[j + 1] = sum [j] + quests[j];
        }

        // for test
        //if (t < 4) continue;

        if (quests[0]*d < c) {
            cout << "Impossible" <<endl;
            continue;
        }

        if(sum[min(n,d)] >= c) {
            cout << "Infinity" <<endl;
            continue;
        }

        // bs for k from 0 to d; k nho -> point lon
        ll left = 0;
        ll right = d;
        ll mid = (left + right)/2;
        while(left < right) {
            //cout <<"left:"<< left <<"mid:"<< mid <<"right:" <<right<< endl;
            mid = (left + right)/2;
            if((left == mid) && (left + 1 == right)) mid++;
            ll num = mid + 1;// num so lon nhat trong quests;
            ll round = d/(mid + 1);
            ll remain = d % (mid + 1);
            ll point = 0;
            if (num > quests.size()) {
               if (remain > quests.size()) {
                    point = sum[quests.size()]*round + sum[quests.size()];
               } else {
                    point = sum[quests.size()]*round + sum[remain];
               }
            }else {
                    point = sum[num]*round + sum[remain];  // remain luon < num
            }

            // check dk point
            if (point < c) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }
        cout << left << endl;
    }
    return 0;
}