#include <iostream>
#include <string>

using namespace std;

void num_to_string(char n)
{
    switch (n){
        case '0':
            cout <<"ling";
            break;
        case '1':
            cout <<"yi";
            break;
        case '2':
            cout <<"er";
            break;
        case '3':
            cout <<"san";
            break;
        case '4':
            cout <<"si";
            break;
        case '5':
            cout <<"wu";
            break;
        case '6':
            cout <<"liu";
            break;
        case '7':
            cout <<"qi";
            break;
        case '8':
            cout <<"ba";
            break;
        case '9':
            cout <<"jiu";
            break;
        default:
            break;
    }
}

int main() {
    string s;
    cin >>s;
    int num=0;
    for (int i = 0; i <s.length() ; ++i) {
        num=num+s[i]-'0';
    }

    string snum=to_string(num);
    int j;
    for (j = 0; j < snum.length()-1 ; ++j) {
        num_to_string(snum[j]);
        cout <<" ";
    }
    num_to_string(snum[j]);
    return 0;
}