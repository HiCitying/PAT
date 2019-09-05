#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool selectstr(char s[],int length)
{
    for (int i = 0; i <length ; ++i) {
        if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
        {
            return false;
        } else{
            return true;
        }
    }
}

int main() {

    int n;
    bool flag;
    char s[101];
    int length;
    scanf("%d",&n);

    while (n--)
    {
       memset(s,0,101);
       scanf("%s",s);
       length=strlen(s);
       if(selectstr(s,length))
       {
           int lena=0;
           int lenb=0;
           int lenc=0;

           for (int i = 0; i < length; ++i) {
               if(s[i]!='P')
               {
                   lena++;
               } else{
                   break;
               }
           }
           for (int j = 0,cnt=0; j < length; ++j) {
               if(s[j]!='T')
               {
                    cnt++;
               } else{
                   lenb=cnt-lena-1;
                   lenc=length-cnt-1;
                   break;
               }
           }
           
           if(lenb==0)
           {
               printf("NO\n");
           } else{
               if(lenc==lena*lenb)
               {
                   printf("YES\n");
               } else{
                   printf("NO\n");
               }
           }
       } else{
           printf("NO\n");
       }
    }

    return 0;
}