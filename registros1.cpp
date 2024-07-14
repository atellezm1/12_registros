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
    int n,may,men,a;
    a=0;
    may=0;
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
    cout<<"Con un sueldo de: "<<empleado[a].sueldo;

    return 0;
}