//https://codelearn.io/sharing/thuat-toan-chuoi-nhi-phan-do-dai-n
// tim so 0 dau tien tu phai sang trai (index)
// thay tat ca cac so ben phai = 0
// giu nguyen cac so ben trai

#include<iostream>
using namespace std;
int np[100];
int n;
bool done = false;

void print() {
    for (int i = 1; i<= n; i++)
        cout << np[i] << " ";
    cout << endl;    
}

void next() {
    int i;
    for (i = n; i >= 0; i--) {
        if (np[i] == 0)
            break;
    }
        
    if(i < 1) {
        done = true;
    } else {
        np[i] = 1;
        for (int j = i + 1; j <= n; j++)
            np[j] = 0;
        print();    
    }
}

int main() {
    cout << "nhap n:"<< endl;
    cin >> n;
    //n = 3;

    //init so dau tien toan cac so 0
    for(int i = 1; i<= n; i++)
        np[i] = 0;

    print();

    // sinh nhi phan
    while(!done) {
        next();
    }

    return 0;
}