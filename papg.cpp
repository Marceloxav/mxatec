//progressao geometrica(PG) é toda sequencia de numeros não nulos na qual  é
 //constante o quociente da divisão de cada termo(a partir do segundo) pelo
 //termo anterior. Esse quociente é chamado razao q.
 //Determinar se a sequencia é uma PG.
 #include <iostream>
 #include<math.h>
 int main()
 {
     system("color 3f");
 using namespace std;
 int a1, a2, a3,a4,pg, q1,q2;
 cout<<"\nEntre com o primeiro numero da sequencia:\n";
 cin>>a1;
 cout<<"\nEntre com o segundo numero da sequencia:\n";
 cin>>a2;
 cout<<"\nEntre com o terceito numero da sequencia:\n";
 cin>>a3;
 cout<<"\nEntre com o quarto numero da sequencia:\n";
 cin>>a4;
 q1=a2/a1;
 cout<<"\nA primeira razão e' :\n"<<q1;
 q2=a3/a2;
 cout<<"\nA segunda razao e':\n"<<q2;
 if(q1!=q2){
 cout<<"\nA sequencia nao e' uma PG\n";
}
 else
 { q1=q2;
 cout<<"\nA sequencia e' uma PG :\n";
}
 system("pause");
 system("cls");
cout<<"\nPara a sequencia ser considerada uma progressao geometrica, e' necess\n";
cout<<"\nnecessario que a razao da divisão dos termos seja igual. Para conferir\n";
cout<<"\ntente com 2,10,50,250.*****\n";
cout<<"\n";
system("pause");
}
