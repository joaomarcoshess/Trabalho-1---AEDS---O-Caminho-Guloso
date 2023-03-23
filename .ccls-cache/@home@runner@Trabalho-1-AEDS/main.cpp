#include <bits/stdc++.h>
#include "Matriz.hpp"

using namespace std;

int main() 
{
  FILE *arq;
  int numero, tam, valorCaminhada = 0;
  int c = 0, l = 0;
  int **matriz;
  Matriz m;
  
  arq = fopen("input.data", "rt");
  if (arq == NULL)
  {
    cout << "Problemas na CRIACAO do arquivo\n";
    return 0;
  }

  fscanf(arq, "%d", &tam);
  fscanf(arq, "%d", &tam);
  
  matriz = new int *[tam];
  for(int j = 0; j < tam; j++)
  {
    matriz[j] = new int[tam];
  }
  
  while (!feof(arq))
  {   
    fscanf(arq, "%d", &numero);
    matriz[l][c] = numero;
    
    if(c != tam-1)
    {
      c++;
    }
    else if(l != tam-1)
    {
      c = 0;
      l++;
    }
    else
    {
      l = 0;
      c = 0;
      valorCaminhada += m.percorrerMatriz(matriz, tam);
    }
  }
  matriz = m.limparMatriz(matriz, tam);
  cout << "O valor total foi: " << valorCaminhada << endl;
  fclose(arq);
}