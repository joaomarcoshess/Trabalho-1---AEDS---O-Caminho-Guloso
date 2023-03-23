#include <bits/stdc++.h>

#ifndef MAT_HPP_INCLUDED
#define MAT_HPP_INCLUDED

using namespace std

class Matriz{
  private
    int **matriz;

  public:
    Matriz(int **matriz)
    Matriz();

    void setMatriz(int **matriz);
    int **getMatriz();

    int **limparMatriz(int **matriz, int tam);
    int percorrerMatriz(int **matriz, int tam);
    int mostrarCaminho(int **matriz, int tam);
};
#endif