//Alexander Jesús Téllez Mesa
#include<iostream>
#include<string>
using namespace std;

struct persona{
    string nombres;
    int DNI;
    int edad;

};

int main (){
    persona persn[50];
    int n,may,a,p;
    a=0;
    may=0;
    cout<<"introdusca la cantidad de personas: "<<endl;
    cin>>n;
    cin.ignore(100,'\n');
    for(int i=1;i<=n;i++){
        cout<<"ingre los nombres de la persona "<<i<<":"<<endl;
        getline(cin,persn[i].nombres);
        cout<<"ingrese el DNI de la persona "<<i<<":"<<endl;
        cin>>persn[i].DNI;
        cout<<"ingrese la edad de la persona "<<i<<":"<<endl;
        cin>>persn[i].edad;
        cin.ignore(1000,'\n');
    }
    for(int i=1; i<=n;i++){
        if(persn[i].edad>50){
            may=may+1;
        }
    }
    cout<<"la cantidad de personas mayores de 50 años son: "<<may<<endl;
     
     for(int i=1;i<=n;i++){
        a=persn[i].edad+a;
     }
    p=a/n;
    cout<<"el promedio de las edades de todas las personas es:"<<p<<endl;
    cout<<"LOS DATOS INGRESADOS DE TODAS LAS PERSONAS SON: "<<endl;
    for(int i=1; i<=n;i++){
        cout<<"nombres: "<<persn[i].nombres<<endl;
        cout<<"numero de DNI: "<<persn[i].DNI<<endl;
        cout<<"edad de la persona: "<<persn[i].edad<<endl;
    }

	
    return 0;
}
