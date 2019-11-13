#include <iostream>
using namespace std;

void multiplicar(double A[20][20],int FA,int CA,double B[20][20],int FB,int CB,double C[20][20]);
void rellenar(double M[20][20],int f,int c);
void imprimir(double M[20][20],int f,int c);

int main () 
{
    double A[20][20];
    double B[20][20];
    double C[20][20];
    int fa,ca,fb,cb;
    cout<<"Cantidad filas de la matriz A:"<<"\n";
    cin>>fa;
    cout<<"Cantidad columnas de la matriz A:"<<"\n";
    cin>>ca;
    rellenar(A,fa,ca);
    cout<<"Cantidad filas de la matriz B:"<<"\n";
    cin>>fb;
    cout<<"ingrese columnas de la matriz B:"<<"\n";
    cin>>cb;
    rellenar(B,fb,cb);
    if(fb==ca)
    {
    multiplicar(A,fa,ca,B,fb,cb,C);
    cout<<"matriz A:"<<endl;
    imprimir(A,fa,ca);
    cout<<"matriz B:"<<endl;
    imprimir(B,fb,cb);
    cout<<"matriz AXB:"<<endl;
    imprimir(C,fa,cb);
    }    
    else
    {
       cout<<"No se pueden multiplicar las matrices porque las filas de b no son iguales a las columnas de a"; 
    }    
    
    return 0;
}
void multiplicar(double A[20][20],int FA,int CA,double B[20][20],int FB,int CB,double C[20][20])
{
    
    if(CA==FB){//para que se puedan multiplicar dos matrices
        for(int i=0;i<FA;i++){
            for(int j=0;j<CB;j++){
                C[i][j]=0;//inicializar
                for(int k=0;k<CA;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
    }
 } 
void rellenar(double M[20][20],int f,int c)
{
    cout<<"Ingrese los numeros de la matriz:"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cin>>M[i][j];
        }
    }
}
void imprimir(double M[20][20],int f,int c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}    
