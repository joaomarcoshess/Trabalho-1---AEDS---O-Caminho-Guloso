#include <bits/stdc++.h>

#ifndef MATRIZ_HPP_INCLUDED
#define MATRIZ_HPP_INCLUDED

using namespace std;

class Matriz
{
  private:
    int **matriz;

  public:
    
	  Matriz(int **matriz);
    Matriz();

    void setMatriz(int **matriz);
    int **getMatriz();

    int LerArquivo();
    int **LimparMatriz(int **matriz, int tam);
    int PercorrerMatriz(int **matriz, int tam);
    void MostrarCaminho(int **matriz, int tam);

};
#endif
