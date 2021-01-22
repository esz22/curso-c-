/*Transmision de direcciones

ejemplo:intercambiar el valor de 2 vairables*/


#include <iostream>
#include <conio.h>

using namespace std;

void swap(float *,float*);

int main()
{
    float num1= 20.8,num2=6.78;

    cout<<"primero numero: "<<num1<<endl;
    cout<<"segundo numero: "<<num2<<endl;

    swap(&num1,&num2);

    cout<<"primero numero: "<<num1<<endl;
    cout<<"segundo numero: "<<num2<<endl;

    getch();
    return 0;
}

void swap(float *dir1,float *dir2){

    float aux;

    aux=*dir1;
    *dir1=*dir2;
    *dir2=aux;
}
