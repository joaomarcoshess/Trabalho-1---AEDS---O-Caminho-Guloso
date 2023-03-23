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

int **Matriz::limparMatriz(int **matriz, int tam)
{
  for(int j = 0; j < tam; j++)
  {
    delete[] matriz[j];
  }
  delete[] matriz;

  return matriz;
}

void Matriz::mostrarCaminho(int **matriz, int tam)
{
  cout << endl << "-----CAMINHO PERCORRIDO NA MATRIZ MARCADO COM -1-----" << endl << endl;
  for(int j = 0; j < tam; j++)
  {
    for(int k = 0; k < tam; k++)
    {
      cout << matriz[j][k] << "\t";
    }
    cout << endl;
  }
}

int Matriz::percorrerMatriz(int **matriz, int tam)
{
  int valorCaminhada = matriz[0][0];
  int aux, auxL, auxC;
  int i = 0, j = 0;

  matriz[0][0] = -1;
  
  while(i != tam-1 || j != tam-1)
  {
    if(j == 0)
    {
      if(i != tam-1)
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
      valorCaminhada += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
    else if(j == tam-1)
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
      valorCaminhada += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
    else if(i == tam-1)
    {
      valorCaminhada += matriz[i][j+1];
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
      valorCaminhada += aux;
      matriz[i][j] = -1;
      i = auxL;
      j = auxC;
    }
  }
  matriz[tam-1][tam-1] = -1;
  mostrarCaminho(matriz, tam);
  cout << endl << "Soma obtida neste caminho: " << valorCaminhada << endl;
  return valorCaminhada;
}