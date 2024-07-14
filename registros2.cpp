//Alexander Jesús Téllez Mesa
#include<iostream>
using namespace std;

struct persona{
    string nombres;
    int DNI;
    int edad;

};


int main (){
    persona persn[50];
    int n,may,men,a,b;
    b=0;
    a=0;
    may=0;
    men=999999;
    cout<<"introdusca la cantidad de personas: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"ingre los nombres de la persona "<<i<<":"<<endl;
        cin>>persn[i].nombres;
        cout<<"ingrese el DNI de la persona "<<i<<":"<<endl;
        cin>>persn[i].DNI;
        cout<<"ingrese la edad de la persona "<<i<<":"<<endl;
        cin>>persn[i].edad;
    }


    return 0;
}