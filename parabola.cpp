#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    system("color 0e");
    int a, b, c, delta, V1, V2;
    cout<<"***Coordenadas do vértice de uma parabola***\n";
    cout<<"A coordenadas do vértice de uma parábola sao:\n";
    cout<<"(-b/2a(abscissa) e (-delta/4a(coordenada)\n";
    cout<<"\n\n";
    cout<<"\nEntre com o valor de a:\n";
    cin>>a;
    cout<<"\nEntre com o valor de b:\n";
    cin>>b;
    cout<<"\nEntre com o valor de c:\n";
    cin>>c;
    delta=(((pow(b,2)-4*a*c)));
    V1=(-(-b/2*a));
    V2=(-(delta/4*a));
    cout<<"\nA abscissa da coordenada e'\n"<<V1;
    cout<<"\nA ordenada da coordenada e':\n"<<V2;
    system("pause");
}
