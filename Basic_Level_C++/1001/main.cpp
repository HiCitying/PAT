#include <iostream>

using namespace std;
//1001 害死人不偿命的(3n+1)猜想 (15分)
int main() {
    int n;
    int count = 0;
    cin >> n;
    while ( n != 1 ) {
        if ( n%2  == 1 ) {
            n = ( 3*n + 1 ) / 2;
        } else {
            n /= 2;
        }
        count ++;
    }
    cout << count;
    return 0;
}
