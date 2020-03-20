#include <iostream>

using namespace std;

//1028 人口普查 (20分)
int main() {
    int n, cnt = 0;
    cin >> n;
    string name, birth, maxname, maxbirth = "1814/09/06", minname, minbirth = "2014/09/06";
    for (int i = 0; i < n; ++i) {
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06") {
            cnt ++;
            if (birth >= maxbirth) {
                maxbirth = birth;
                maxname = name;
            }
            if (birth <= minbirth) {
                minbirth = birth;
                minname = name;
            }
        }
    }
    cout << cnt;
    if (cnt != 0) {
        cout << " " << minname << " " << maxname;
    }
    return 0;
}
