#include <iostream>

using namespace std;
//1004 成绩排名 (20分)
int main() {
    int n, max = -1, min = 101, score;
    cin >> n;

    string maxname, minname, maxsname, minsname;
    string name, sname;
    for (int i = 0; i < n; ++i) {
        cin >> name >> sname >> score;
        if (max < score) {
            maxname = name;
            maxsname = sname;
            max = score;
        }
        if (min > score) {
            minname = name;
            minsname = sname;
            min = score;
        }
    }
    cout << maxname << " " << maxsname << endl;
    cout << minname << " " << minsname;
    return 0;
}
