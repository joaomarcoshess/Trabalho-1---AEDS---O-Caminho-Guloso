#include "Matriz.hpp"

Matriz::Matriz(int **matriz)
{
  setMatriz(matriz);
}
Matriz::Matriz()
{
}

void Matriz::setMatriz(int **matriz)
{
  this->matriz = matriz;
}
int **Matriz::getMatriz()
{
  return this->matriz;
}

int Matriz::leArquivo(){
  FILE *arq;
  int n, t, vc = 0;
  int c = 0, l = 0;
  int **matriz;

  //Variáveis n, t e vc correspondem a número de uma posição da matriz, tamanho da matriz e o valor da soma da caminhada, respectivamente.

  cout <<"O Caminho Guloso" << endl;
  cout <<"O Caminho Guloso determina o maior número entre 5 direcoes, no qual" << endl;
  cout <<"o caminho sera demarcado pelo número -1 e no final sera mostrado o" << endl;
  cout <<"caminho feito, alem de mostrar a soma de todos os numeros no final." << endl << endl;
  
  arq = fopen("dataset/input.data", "rt");
  if (arq == NULL)
  {
    cout << "Problemas na CRIACAO do arquivo\n";
    return 0;
  }

  fscanf(arq, "%d", &t);
  fscanf(arq, "%d", &t);
  
  matriz = new int *[t];
  for(int j = 0; j < t; j++)
  {
    matriz[j] = new int[t];
  }
  
  while (!feof(arq))
  {   
    fscanf(arq, "%d", &n);
    matriz[l][c] = n;
    
    if(c != t-1)
    {
      c++;
    }
    else if(l != t-1)
    {
      c = 0;
      l++;
    }
    else
    {
      l = 0;
      c = 0;
      vc += percorrerMatriz(matriz, t);
    }
  }
  matriz = limparMatriz(matriz, t);
  cout << "A soma total de todos os caminhos percorridos foi: " << vc << endl;
  fclose(arq);
  return 0;
}

int **Matriz::limparMatriz(int **matriz, int t)
{
  for(int j = 0; j < t; j++)
  {
    delete[] matriz[j];
  }
  delete[] matriz;

  return matriz;
}

void Matriz::mostrarCaminho(int **matriz, int t)
{

  int c;
  
  cout << endl << "Caminho percorrido na " << c+1 << "a matriz" << endl << endl;
  for(int j = 0; j < t; j++)
  {
    for(int k = 0; k < t; k++)
    {
      
      cout << matriz[j][k] << "\t";
    }
    cout << endl;
  }
  c++;
}

int Matriz::percorrerMatriz(int **matriz, int t)
{
  int vc = matriz[0][0];
  int aux, auxL, auxC;
  int i = 0, j = 0;

  matriz[0][0] = -1;
  
  while(i != t-1 || j != t-1)
  {
    if(j == 0)
    {
      if(i != t-1)
      {
        aux = matriz[i+1][j];
        auxL = i+1;
        auxC = j;
        if(aux < matriz[i][j+1])
        {
          aux = matriz[i][j+1];
          auxL = i;
          auxC = j+1;
        }
        if(aux < matriz[i+1][j+1])
        {
          aux = matriz[i+1][j+1];
          auxL = i+1;
          auxC = j+1;
        }
      }
      else
      {
        aux = matriz[i][j+1];
        auxL = i;
        auxC = j+1;
      }
      vc += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
    else if(j == t-1)
    {
      aux = matriz[i+1][j];
      auxL = i+1;
      auxC = j;
      if(aux < matriz[i][j-1])
      {
        aux = matriz[i][j-1];
        auxL = i;
        auxC = j-1;
      }
      if(aux < matriz[i+1][j-1])
      {
        aux = matriz[i+1][j-1];
        auxL = i+1;
        auxC = j-1;
      }
      vc += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
    else if(i == t-1)
    {
      vc += matriz[i][j+1];
      matriz[i][j] = -1;
      j++;
    }
    else
    {
      aux = matriz[i][j-1];
      auxL = i;
      auxC = j-1;
      if(aux < matriz[i+1][j-1])
      {
        aux = matriz[i+1][j-1];
        auxL = i+1;
        auxC = j-1;
      }
      if(aux < matriz[i+1][j])
      {
        aux = matriz[i+1][j];
        auxL = i+1;
        auxC = j;
      }
      if(aux < matriz[i+1][j+1])
      {
        aux = matriz[i+1][j+1];
        auxL = i+1;
        auxC = j+1;
      }
      if(aux < matriz[i][j+1])
      {
        aux = matriz[i][j+1];
        auxL = i;
        auxC = j+1;
      }
      vc += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
  }
  matriz[t-1][t-1] = -1;
  mostrarCaminho(matriz, t);
  cout << endl << "Soma dos numeros neste caminho: " << vc << endl;
  return vc;
}