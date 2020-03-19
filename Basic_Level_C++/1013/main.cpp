#include <iostream>
#include <vector>

using namespace std;

bool isprime(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
//1013 数素数 (20分)
int main() {
    int M, N;
    int num = 2, cnt = 0;
    cin >> M >> N;
    vector<int> v;
    while (cnt < N) {
        if (isprime(num)) {
            cnt ++;
            if (cnt >= M){
                v.push_back(num);
            }
        }
        num ++;
    }
    cnt = 0;
    for (int i = 0; i < v.size(); ++i) {
        cnt ++;
        if (cnt % 10 != 1) cout << " ";
        cout << v[i];
        if (cnt % 10 == 0) cout << endl;
    }
    return 0;
}
