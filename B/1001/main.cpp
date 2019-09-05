#include <iostream>
using namespace std;

int main() {
    int a;
    int i=0;
    cin >>a;
    while (a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
        } else{
            a=(3*a+1)/2;
        }
        i++;
    }
    cout <<i;
    return 0;
}