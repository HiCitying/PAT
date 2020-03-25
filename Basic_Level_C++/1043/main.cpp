#include <iostream>

using namespace std;

// 1043 输出PATest (20分)
int main() {
    string s;
    getline(cin, s);
    int a[6] = {0};
    for (int i = 0; i < s.length(); ++i) {
        if( s[i] == 'P' ) {
            a[0] ++;
        } else if ( s[i] == 'A' ) {
            a[1] ++;
        } else if ( s[i] == 'T') {
            a[2] ++;
        } else if ( s[i] == 'e')  {
            a[3] ++;
        } else if (s[i] == 's') {
            a[4] ++;
        } else if (s[i] == 't') {
            a[5] ++;
        } else {
            //
        }
    }
    while (a[0] > 0 || a[1] > 0 || a[2] > 0 || a[3] > 0 || a[4] > 0 || a[5] > 0){
        if ( a[0] -- > 0 ) {
            printf("P");
        }
        if ( a[1] -- > 0 ) {
            printf("A");
        }
        if ( a[2] -- > 0 ) {
            printf("T");
        }
        if ( a[3] -- > 0 ) {
            printf("e");
        }
        if ( a[4] -- > 0) {
            printf("s");
        }
        if ( a[5] -- > 0) {
            printf("t");
        }
    }
    return 0;
}
