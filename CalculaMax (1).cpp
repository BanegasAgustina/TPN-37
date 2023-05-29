/*1.       Diseñar un programa que tenga una
función y como parámetros dos números, y que calcule el máximo.
int CalcularMaximo(int a, int b)*/

#include <iostream>

using namespace std;
int CalculaMax(int a,int b);
int main()
{   int n1,n2;
    cout<<"ingrese un numero";
    cin>>n1;
    cout<<"ingrese un numero";
    cin>>n2;
    cout<<"el maximo es: "<<CalculaMax(n1,n2);

    return 0;
}
int CalculaMax(int a,int b){
    bool flag=false ;
    if(a>b){
      flag=true  ;
    }else{
    return flag;
        
    }
}