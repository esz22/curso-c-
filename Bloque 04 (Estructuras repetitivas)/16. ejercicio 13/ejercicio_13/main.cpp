#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //hacer un programa que realice la serie fibonacci

    int n,x=0,y=1,z=0;

    cout<<"digite el limite de la serie fibonacci"<<endl;
    cin>>n;

    cout<<"1, ";
    for(int i =1;i<=n;i++){
        z=x+y;
        cout<<z<<", ";
        x=y;
        y=z;
    }


    getch();
    return 0;
}
