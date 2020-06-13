#include <iostream>
#include <stdlib.h>

using namespace std;

//prototipo de funcion
int encontrarMax(int x, int y);

int main()
{
    int n1;
    int n2;
    int may;
    cout<<"digite el primer nomero: "<<endl;
    cin>>n1;
    cout<<"digite el segundo nomero: "<<endl;
    cin>>n2;

    may=encontrarMax(n1,n2);
    cout<<"\nel numero mayor es: "<<may<<endl;

    system("pause");
    return 0;
}


//definicion de funcion
int encontrarMax(int x,int y){
    int maxi;

    if(x>y){
        maxi=x;
    }
    else{
        maxi=y;
    }
    return maxi;
}
