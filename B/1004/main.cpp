#include <iostream>
#include <string>

//#define MaxSize 1000

using namespace std;


//typedef struct student{
//    char name[11];
//    char subject[11];
//    int grade;
//}Student;
//
//
//int FindTheHighGrade(Student student[],int n)
//{
//    int Hindex=0;
//    for (int i = 0; i < n; ++i) {
//        if(student[Hindex].grade<student[i].grade)
//        {
//            Hindex=i;
//        }
//    }
//    return Hindex;
//}
//
//int FindTheLowGrade(Student student[],int n)
//{
//    int Lindex=0;
//    for (int i = 0; i < n; ++i) {
//        if(student[Lindex].grade>student[i].grade)
//        {
//            Lindex=i;
//        }
//    }
//    return Lindex;
//}
//
//int main() {
//    int n;
//    int high,low;
//    Student student[MaxSize];
//    scanf("%d",&n);
//    for (int i = 0; i < n; ++i) {
//        scanf("%s %s %d",&student[i].name,&student[i].subject,&student[i].grade);
//    }
//    high=FindTheHighGrade(student,n);
//    low=FindTheLowGrade(student,n);
//    printf("%s %s\n",student[high].name,student[high].subject);
//    printf("%s %s\n",student[low].name,student[low].subject);
//
//    return 0;
//}


int main()
{
    int n;
    string MaxName,MaxSub;
    string MinName,MinSub;
    string tmpName,tmpSub;
    int MaxgGrade,MinGrade;
    int tmpGrade;

    cin >>n;
    for (int i = 0; i < n; ++i) {
        cin>>tmpName>>tmpSub>>tmpGrade;
        if(i==0)
        {
            MaxName=MinName=tmpName;
            MaxSub=MinSub=tmpSub;
            MaxgGrade=MinGrade=tmpGrade;

        } else{
            if(MaxgGrade<tmpGrade)
            {
                MaxgGrade=tmpGrade;
                MaxName=tmpName;
                MaxSub=tmpSub;

            }

            if(MinGrade>tmpGrade)
            {
                MinGrade=tmpGrade;
                MinName=tmpName;
                MinSub=tmpSub;
            }
        }
    }
    cout<<MaxName+" "<<MaxSub<<endl;
    cout<<MinName+" "<<MinSub<<endl;
}

//int Min(int a,int b)
//{
//    if(a<b)
//    {
//        return a;
//    }
//    return b;
//}
//
//int main()
//{
//    int a,b,c;
//    int x;
//    scanf("%d %d %d",&a,&b,&c);
//    x=Min(a,Min(b,c));
//    printf("%d",x);
//
//}