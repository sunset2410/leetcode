#include<iostream>
using namespace std;

// void foo(int x)
// {
//     int buf[10];
//     if (x == 1000)
//         buf[x] = 0; // <- ERROR
// }

int main() {
    //foo(8);
    int *ptr;
    int array[10];
    *ptr = 5;
    array[100] = 10;


    return 0;
}