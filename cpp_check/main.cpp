#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1,5,6,7,8,9};
    for(auto it = v.begin(); it != v.end(); ) {
        cout << *it << " ";
        it++;
    }
    return 0;
}