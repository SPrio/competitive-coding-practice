/*
Question  2.      Let’s assume 1st Jan 1900 is Sunday, WAP to Calculate the number of Sundays on the 1st of the month between 1st Jan 1900 to 2nd Dec 1999. (For example: if 1st Jan is Sunday it will be added in the count, if 1st Feb isn’t Sunday, it won’t be counted. Your programming should output the INT which is the total count of Sunday’s which are falling on the 1st Date of the month only). The use of date-function should be skipped.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m=1, d=2, y=1900;
    static int a[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    y-=m<3;
    int day = (y+y/4-y/100+y/400+a[m-1]+d) %7;

    int count=0;
    for(int year= 1900;year<=1999;year++){
        for(int mon=1;mon<=12;mon++){
            if(((year+year/4-year/100+year/400+a[mon-1]+1) %7) == 0)
                count++;
        }
    }
    cout<< count;
    return 0;
}
