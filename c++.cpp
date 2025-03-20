#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <ctime>
#define ll long long
#define nl endl
using namespace std;
int main() {
    int A;cin >> A;
    int sqrtA = sqrt(A);
    if (sqrtA * sqrtA == A) {  
        for (int x=1;x<=sqrtA;x++) {
            if (A%x==0 && x!=A/x) {
                cout<<"Unknown"<<nl;
                return 0;
            }
        }
        cout << "Square" << nl;
        return 0;
    }
    for (int x = 1; x * x <= A; x++) {
        if (A % x == 0 && x != A / x) {
            cout << "Rectangle" << nl;
            return 0;
        }
    }
    cout << "Unknown" << nl;
    return 0;
}
