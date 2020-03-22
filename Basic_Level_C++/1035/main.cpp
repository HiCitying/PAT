#include <iostream>
#include <algorithm>

using namespace std;

// 1035 插入与归并 (25分)
int main() {
    int n;
    int a[100], b[100];
    int i, j;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    // 测试插入排序 前面有序 后面不变
    for( i = 0; i < n-1 && b[i] <= b[i+1]; i ++);
    for( j = i + 1; j < n && a[j] == b[j]; j ++);
    //
    if( j == n) {
        cout << "Insertion Sort" << endl;
        sort(a, a+i+2); // a+i+1 // 代表后一个元素 迭代器 + 1；
    } else {
        cout << "Merge Sort" << endl;
        //
        int k = 1;
        int flag = 1;
        // 进行 MergeSort 排序直到一致 并且排好
        while (flag) {
            flag = 0;
            for( i = 0; i < n ; i ++) {
                if(a[i] != b[i]) {
                    flag = 1;   //交换过
                }
            }
            k *= 2;
            for( i = 0 ;i < n/k; i++) {
                sort(a + i*k, a + (i + 1)*k);
            }
            sort(a + n/k * k, a + n); //末尾不足的
        }
    }

    for (int k = 0; k < n; ++k) {
        if(k != 0) {
            printf(" ");
        }
        printf("%d", a[k]);
    }

    return 0;
}
