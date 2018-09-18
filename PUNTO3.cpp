//PUNTO 3

#include <iostream>
using namespace std;

const int a = 10;
int p[a] = {};

//Enter Arrangemente
void enterarray()
{
    cout<<"Enter 10 arrangement numbers"<<endl;
    for(int i=1;i<=a;i++)cin>>p[i];

}


// Higher number function
int *higher(int array[a])
{
     int *higher;
     int mayor = 0;
     for(int i=0;i<a;i++)
         {
         if (*array > mayor)mayor = *array;
         array++;
     }

     higher = &mayor;
     return higher;
}



//Minor number function

int *minor(int array[a], int nummay)
{
    int menor = nummay;
    for(int i=0;i<a;i++)
    {

        if (*array < menor)menor = *array;
        array++;

    }

    int *minor;
    minor = &menor;
    return minor;


}

int main()
{
    int nh, nm;
    enterarray();
    nh = *higher(p);
    nm= *minor(p,nh);
    cout<<"the biggest number is : "<<nh<<" and the smaller number is : " << nm <<endl;
    return 0;
}
