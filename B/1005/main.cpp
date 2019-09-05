#include <iostream>
#include <string>

#define MaxSize 100

using namespace std;

void InsertSort(int a[],int b[],int n)
{
    int num=0;
    int tmp[MaxSize];
    for (int i = 0; i < n; ++i) {
        if(b[i]==0)
        {
            tmp[num]=a[i];
            num++;
        }
    }
    int pos;
//    for (int j = 2; j <= num; ++j) {
//        if(tmp[j]>tmp[j-1])
//        {
//            tmp[0]=tmp[j];
//            int i;
//            for (i = j-1;tmp[0]>tmp[i];i--) {
//                tmp[i+1]=tmp[i];
//            }
//            tmp[i+1]=tmp[0];
//        }
//    }
    for (int j = 1; j < num; ++j) {
        if(tmp[j]>tmp[j-1])
        {
            pos=tmp[j];
            int i;
            for (i = j-1;pos>tmp[i]&&i>=0;i--) {
                tmp[i+1]=tmp[i];
            }
            tmp[i+1]=pos;
        }
    }

    for (int k = 0; k <num; ++k) {
        if(k!=(num-1))
        {
            cout<<tmp[k]<<" ";
        } else{
            cout<<tmp[k];
        }

    }
}

int main() {
    int n;
    int a[MaxSize]={0};
    int b[MaxSize]={0};
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    int tmp;
    for (int j = 0; j < n; ++j) {
        if(b[j]==1)
        {
            continue;
        }
        tmp=a[j];
        while (tmp!=1)
        {
            if(tmp%2==0)
            {
                tmp/=2;
            } else{
                tmp=(3*tmp+1)/2;
            }
            for (int i = 0; i < n; ++i)
            {
                if(a[i]==tmp)
                {
                    b[i]=1;
                    break;
                }
            }
        }
    }

    InsertSort(a,b,n);

    return 0;
}