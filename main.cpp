#include <iostream>
#include<string>

using namespace std;

int main() {
 int cont1=1;
 int cont2=1;
 int cont3=1;
 int cont4=1;
 int cont5=1;
 int cont6=1;
 int cont7=1;
 int cont8=1;

 char vetor2[]={'a','b','c'};
 char vetor3[]={'d','e','f'};
 char vetor4[]={'g','h','i'};
 char vetor5[]={'j','k','l'};
 char vetor6[]={'m','n','o'};
 char vetor7[]={'p','q','r','s'};
 char vetor8[]={'t','u','v'};
 char vetor9[]={'w','x','y','z'};
 string P;

 cout << "Digite a entrada P com letras minusculas de no maximo 50 caracteres"<< endl;
 getline(cin,P);
 cout <<"Palavra digitada:"<< P << endl;
 if (P.length() < 49){
   for (int i= 0; i < P.size();i++){
  for(int j=0; j<3; j++){
      if(vetor2[j]==P[i]){
      
      cout << "#2=" << cont1<< endl;
      break;

    }
   cont1=cont1+1;
    }
    cont1=1;
    for(int k=0; k<3; k++){
      if(vetor3[k]==P[i]){
      
      cout << "#3=" << cont2<< endl;
      break;

    }
   cont2=cont2+1;
    }
    cont2=1;
     for(int l=0; l<3; l++){
      if(vetor4[l]==P[i]){
      
      cout << "#4=" << cont3<< endl;
      break;

    }
   cont3=cont3+1;
    }
    cont3=1;
     for(int m=0; m<3; m++){
      if(vetor5[m]==P[i]){
      
      cout << "#5=" << cont4<< endl;
      break;

    }
   cont4=cont4+1;
    }
    cont4=1;
    for(int n=0; n<3; n++){
      if(vetor6[n]==P[i]){
      
      cout << "#6=" << cont5<< endl;
      break;

    }
   cont5=cont5+1;
    }
    cont5=1;
    for(int o=0; o<4; o++){
      if(vetor7[o]==P[i]){
      
      cout << "#7=" << cont6<< endl;
      break;

    }
   cont6=cont6+1;
    }
    cont6=1;
    for(int q=0; q<3; q++){
      if(vetor8[q]==P[i]){
      
      cout << "#8=" << cont7<< endl;
      break;

    }
   cont7=cont7+1;
    }
    cont7=1;
    for(int u=0; u<4; u++){
      if(vetor9[u]==P[i]){
      
      cout << "#9=" << cont8<< endl;
      break;

    }
   cont8=cont8+1;
    }
    cont8=1;
    }
 }else 
 cout << "Reinicie para digitar novamente. Palavra tem mais que 50 caracteres" << endl;


 cout << "Aperte as teclas crtl+Enter para reiniciar"<< endl;

 return 0;
}