// #include <iostream>
// using namespace std;

// int main()
// {
//     char y='b';
//     float e=3.123;
//     float * eptr=&e;
//     int y=34;
//     int *yptr = &y;
//     cout << eptr;
//     cout << sizeof(eptr);
//     double z=33.432234245;

//     // double*eptr=&z;
//     // char * yptr=(char*)&y;

//     cout<<yptr;
//     cout << sizeof(yptr);
//     return 0;

// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x=10;
//     char*ptr1=(char*)&x;
     
//     char ch='A';
//     int * pter2 =(int *)&x;
//     cout<<pter2;
//     cout << ptr1;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int x = 516;
    char *ptr1 = (char *)&x;
    cout<<(int)*ptr1;
    return 0;
}