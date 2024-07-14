//Alexander Jesús Téllez Mesa
#include<iostream>
using namespace std;

struct mpdatatech{
    string nombres;
    string sexo;
    int sueldo;

};


int main (){
    mpdatatech empleado[10];
    int n,may,men,a,b;
    b=0;
    a=0;
    may=0;
    men=999999;
    cout<<"introdusca la cantidad de empleados: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"ingres el nombre del empleado "<<i<<":"<<endl;
        cin>>empleado[i].nombres;
        cout<<"ingrese el sexo del empleado "<<i<<":"<<endl;
        cin>>empleado[i].sexo;
        cout<<"ingrese la cantidad del sueldo del empleado "<<i<<":"<<endl;
        cin>>empleado[i].sueldo;
    }
    for(int i=1;i<=n;i++){
        if(may < empleado[i].sueldo){
            may=empleado[i].sueldo;
            a=i;
        }
    }
    cout<<"El empleado con mayor sueldo es: "<<empleado[a].nombres<<endl;
    cout<<"Con un sueldo de: "<<empleado[a].sueldo<<endl;

    for(int i=1;i<=n;i++){
        if(men>empleado[i].sueldo){
            men=empleado[i].sueldo;
            b=i;
        }
    }
    cout<<"El empleado con menor sueldo es: "<<empleado[b].nombres<<endl;
    cout<<"Con un sueldo de: "<<empleado[b].sueldo<<endl;

    return 0;
}