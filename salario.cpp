#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    system("color 4f");
int option;
int sal, imp, novo_sal;
cout<<"\nEntre com o valor do salario:\n";
cin>>sal;
{
      system("cls");
      cout<<"\n***Calculo de imposto sobre salario***\n";
      cout<<"\n1- Imposto\n";
      cout<<"\n2- Novo Salario\n";
      cout<<"\n3- Classificacao\n";
      cout<<"\n4- Finalizar o programa:\n";
      cout<<"\n***Digite a opcao desejada***\n";
      option=0;
      cin>>option;
      system("cls");
      {
    ////////////////////////////////////////////////
      if(option=1);
     else(sal<500);
     cout<<"\nO valor do imposto nesta faixa e' 5%:\n"<<sal*0.05;
     if(sal<=750&&sal<=1500);
     cout<<"\nO valor do imposto nesta faixa e' 10%\n"<<sal*0.10;
     if(sal>850)
     cout<<"\nO valor do imposto nesta faixa e' 15%\n"<<sal*0.15;
     }
     //////////////////////////////////////////////////////
     {
     if(option=2);
    else(sal>1500);
     cout<<"\nO valor do aumento nesta faixa e' R$25.00\n"<<sal+25.00;
     if(sal<=750&&sal<=1500);
     cout<<"\nO valor do aumento nesta faixa e' R$50.00\n"<<sal+50.00;
     if(sal<450)
      cout<<"\nO valor do aumento nesta faixa é R$100.00\n"<<sal+100.00;
      }////////////////////////////////////////////
      if(option=3)
     if(sal<=700)
      cout<<"\nVoce e' mal remunerado\n";
  else
      cout<<"\nVoce e' bem remunerado\n";
      system("pause");
}
}
