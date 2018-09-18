//PUNTO 4

#include <iostream>
#include <string>

using namespace std;


void reflect(int *n1)
{
    int temp;
        for( int i=0;i<10;i++){
            for( int p=i;p<10;p++){
                if (n1[p]>n1[i]){
                  temp=n1[i];
                  n1[i] =n1[p];
                  n1[p] =temp;
                }
            }
        }
}


int main()
{

    int a[10]={};
    //int b[10]={};
    int n;
    
    for(int i=0;i<10;++i)
    
    {
        cout<<"Ingresar componentes del vector"<<endl;
        cin>>n;
        a[i]=n;
    }
    
    cout << "\n        Before swapping         " << endl;
    
    cout<<"\nVector: "<<endl;
    for(int i =0;i<10;++i)
    {
        cout <<a[i]<<"  ";
    }
    
    cout << "\n         After swapping         " << endl;
    
    cout<<"\nVector Invertido: "<<endl;
    reflect(a);
    for(int i=0;i<10;i++){
         cout <<a[i]<<"  ";
    }
    

}