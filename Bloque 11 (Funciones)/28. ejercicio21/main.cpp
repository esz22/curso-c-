/*escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual que cero
x^y.
potencia(x)=x                  y=1
            x*potencia(x,y-1)  y>1
            1                  y=0
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int potencia(int, int);

int main()
{
    int x;
    int y;

    cout<<"digite el numero a elevar: "<<endl;
    cin>>x;
    do{
        cout<<"digite la potencia: "<<endl;
        cin>>y;
    }
    while(y<0);

    cout<<"\n"<<x<<"^"<<y<<" = "<<potencia(x,y)<<endl;

    system("pause");
    return 0;
}
int potencia(int x,int y){
    if(y==0){
        return 1;
    }
    else if(y==1){
        return x;
    }
    else if(y>1){
        return x*potencia(x,y-1);
    }
    return 0;
}
