#include<iostream>
using namespace std;
main()
{
float largura, comprimento, preco,total;
cout<<"\qual a largura do terreno; ";
cin>>largura;
cout<<"\qual o comprimento do terreno: ";
cin>>comprimento;
cout<<"\nQual o preco do arame";
cin>>preco;
total=(comprimento*largura*preco);
cout<<"\n Com "<<largura<<"metros de largura";
cout<<"\n Com "<<comprimento<<"metros de comprimento";
cout<<"\n Com "<<preco<<"o metro do arame";
cout<<"\n Gastara R$"<<total;
}
