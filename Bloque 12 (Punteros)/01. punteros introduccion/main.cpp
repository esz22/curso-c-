#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num,*dirnum;

    num=20;
    dirnum=&num;


    cout << *dirnum << endl;
    cout << dirnum << endl;

    getch();
    return 0;
}
