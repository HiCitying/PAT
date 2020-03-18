#include <iostream>

using namespace std;

bool isprime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int N, count = 0;
    cin >> N;
    for (int i = 5; i <= N; ++i) {
        if( isprime(i) && isprime(i-2))
            count ++;
    }
    cout << count;
    return 0;
}
