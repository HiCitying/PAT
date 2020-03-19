#include <iostream>

using namespace std;

// 1018 锤子剪刀布 (20分)
int main() {
    int n;
    cin >> n;
    int jiawin = 0, yiwin = 0;
    char A,B;
    int jia[3] ={0}, yi[3] = {0};   // B C J

    for (int i = 0; i < n; ++i) {
       cin >> A >> B;
       if ( A == 'B' && B == 'C' ) {
           jiawin ++ ;
           jia[0] ++;
       } else if ( A == 'C' && B == 'J' ) {
           jiawin ++;
           jia[1] ++;
       } else if ( A == 'J' && B == 'B' ) {
           jiawin ++;
           jia[2] ++;
       } else if ( B == 'B' && A == 'C' ) {
           yiwin ++;
           yi[0] ++;
       } else if ( B == 'C' && A == 'J' ) {
           yiwin ++;
           yi[1] ++;
       } else if ( B== 'J' && A == 'B') {
           yiwin ++;
           yi[2] ++;
       }
    }

    cout << jiawin << " " << (n - jiawin - yiwin) << " " << yiwin << endl;
    cout << yiwin << " " << (n - jiawin - yiwin) << " " << jiawin << endl;

    char str[4] = "BCJ";
    int i,j;
    i = jia[0] >= jia[1] ? 0 : 1;
    i = jia[i] >= jia[2] ? i : 2;
    j = yi[0] >= yi[1] ? 0 : 1;
    j = yi[j] >= yi[2] ? j : 2;
    cout << str[i] << " " << str[j];
    return 0;
}
