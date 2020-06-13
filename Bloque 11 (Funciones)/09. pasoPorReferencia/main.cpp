//paso de parametros por referencia
#include <iostream>
#include <conio.h>

using namespace std;

void valNew(int&,int&);

int main()
{
    int n1,n2;

    cout<<"Digite 2 numeros: "<<endl;
    cin>>n1>>n2;
    valNew(n1,n2);

    cout<<"el nuevo valor del primer numero es: "<<n1<<endl;
    cout<<"el nuevo valor del segundo numero es: "<<n2<<endl;

    getch();
    return 0;
}
void valNew(int& xnum, int& ynum){
    cout<<"el valor del primer numero es: "<<xnum<<endl;
    cout<<"el valor del segundo numero es: "<<ynum<<endl;

    xnum=333;
    ynum=303030;
}
