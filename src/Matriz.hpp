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

    int leArquivo();
    int **limparMatriz(int **matriz, int tam);
    int percorrerMatriz(int **matriz, int tam);
    void mostrarCaminho(int **matriz, int tam);

};
#endif



