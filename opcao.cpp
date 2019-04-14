#include <iostream>
using namespace std;
int main()
{
int opcao;
while (opcao!= 5)
{
cout<<"Escolha uma opção entre 1 e 4. Escolha 5 para sair do programa\n";
cin>>opcao;
if ((opcao> 5) || (opcao< 1))
{
continue; //opção invalida: volta ao inicio
//do loop
}
switch (opcao)
{ //início do switch
case 1:
cout<<"Opção 1 foi escolhida\n";
break;
case 2:
cout<<"Opção 2 foi escolhida\n";
break;
case 3:
cout<<"Opção 3 foi escolhida\n";
break;
case 4:
cout<<"Opção 4 foi escolhida\n";
break;
case 5:
cout<<"Você saiu do programa\n";
break;
} //fim do switch
} //fim do laço while
system("PAUSE > null");
}
