#include <iostream>
#include<string>

using namespace std;

int main() {
 int cont1=1;
 int cont2=1;

 char vetor2[]={'a','b','c'};
 char vetor3[]={'d','e','f'};
 char vetor4[]={'g','h','i'};
 char vetor5[]={'j','k','l'};
 char vetor6[]={'m','n','o'};
 char vetor7[]={'p','q','r','s'};
 char vetor8[]={'t','u','v'};
 char vetor9[]={'w','x','y','z'};
 string P;
 cout << "Digite a entrada P";
 getline(cin,P);
 
 
 for (int i= 0; i < P.size();i++){
  for(int j=0; j<3; j++){
      if(vetor2[j]==P[i]){
      
      cout << "#2=" << cont1<< endl;
      break;

    }
   cont1=cont1+1;
    
    
    
    }
    for(int k=0; k<=2; k++){
      if(vetor3[k]==P[i]){
      cout << "#3=" << cont2<< endl;
      
      break;

    }
    cont2=cont2+1;
    
    
    
    
    }
    
    
 }
 
 return 0;
}


