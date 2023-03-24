# Trabalho 1 - O Caminho Guloso, Implementado em C++

<h2>Introdução </h2>

<p> A necessidade de encontrar um dado em específico dentre diversos outros dados vem se tornando cada dia mais importante para obter a informação mais precisa para determinada situação. Com isso, a ideia de implementação do código do Caminho Guloso é um exemplo de como  </p>


<h2>Objetivo</h2>

<p>O objetivo da aplicação do trabalho "O Caminho Guloso" é chegar na última linha e na última coluna da matriz, somando os valores do caminho no qual o programa percorreu e demarcando-os com -1, para facilitar a visualização do caminho percorrido. O programa começa na posição [0,0] e pode apenas andar a 1 casa de distância de sua posição atual. Além disso, o programa pode escolher entre 5 direções: esquerda, direita, diagonal esquerda baixo, diagonal direita baixo e baixo, comparando todas essas posições se for o caso e optando pela posição que tiver o maior valor numérico.  </p>

<p>É importante salientar que o programa não pode fazer analise das outras 3 posições restantes: diagonal esquerda cima, diagonal direita cima e cima.</p>


<h2>Arquivos</h2>

<p>Foram utilizados 5 arquivos para a implementação do código do Caminho Guloso:</p>


  <li><code>main.cpp</code> : Arquivo principal de execução do código. <br></li>
  <li><code>Matriz.hpp</code> : Base da criação das funções do código. <br></li>
  <li><code>Matriz.cpp</code> : Elaboração das funções criadas no arquivo "Matriz.hpp". <br></li>
  <li><code>input.data</code> : Contém as matrizes para serem executadas no código e está armazenado na pasta "dataset" <br></li>
  <li><code>Makefile</code> : Automatiza a compilação do código. <br></li>


<h2>Funções</h2>

<p>Foram utilizadas 4 funções para organização e otimização do programa:</p>

  <li><code>int LerArquivo();</code> : Função que lê todas as matrizes do arquivo "input.data" e chama a função "PercorrerMatriz" para a análise do caminho e soma do mesmo, além de chamar a função "LimparMatriz" para ser possível a leitura das outras matrizes.<br></li>
  <li><code>int **LimparMatriz(int **matriz, int tam);</code> : Limpa a matriz lida pela função "LerArquivo". O parâmetro "**matriz" puxa a matriz que será feita a limpeza de memória alocada e o parâmetro "tam" indica o tamanho da matriz.<br></li>
  <li><code>void MostrarCaminho(int **matriz, int tam);</code> : Mostra o caminho percorrido pelo programa, a soma do caminho de cada matriz e a soma de todos os caminhos das matrizes. Foram passados o parâmetro da matriz alocada a ser mostrada e o parâmetro do tamanho da matriz. <br></li>
  <li><code>int PercorrerMatriz(int **matriz, int tam);</code> : Função que é chamada em "LerArquivo". Percorre a matriz alocada, comparando entre 5 posições o maior valor numérico entre elas, demarcando cada posição passada com o número -1 até chegar na última posição [N/N]. Foram utilizados diversas condições e variáveis auxiliares para maior precisão e organização do código. No parâmetro, temos a matriz alocada que será percorrida e o tamanho dela. <br></li>
  
<h2>Exemplos de Compilação</h2>

<p> Foram utilizadas matrizes de tamanho 7x7 para a compilação a seguir: </p>

<p align="center">
  ![Screenshot](Exemplo1.png)
</p>
