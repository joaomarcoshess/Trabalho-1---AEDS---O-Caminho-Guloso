# Trabalho 1 - O Caminho Guloso, Implementado em C++

<h2>Introdução </h2>

<p> A necessidade de encontrar um dado em específico dentre diversos outros dados vem se tornando cada dia mais importante para obter a informação mais precisa para determinada situação. Com isso, a ideia de implementação do código do Caminho Guloso é um exemplo de como é possível escolher pelo caminho mais interessante a partir da análise de todas as possibilidades. </p>

<p> O programa consiste na utilização de K matrizes quadradas de tamanho [N/N], a fim de determinar o caminho com os maiores valores numéricos próximos de determinada posição. </p>


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

<p> Foram utilizadas 2 matrizes de tamanho 7x7 para a compilação a seguir: </p><br>

<p align="center">
  <img src="https://user-images.githubusercontent.com/75141271/227566320-ef75b40d-96f1-454e-ad76-6398206efc71.jpg">
<p align="center"><b>Figura 1 - Matrizes</b></p>
</p><br>
<p align="center">
  <img src="https://user-images.githubusercontent.com/75141271/227565589-8596f7d2-da22-43e4-8a1e-7f0b4a1f15af.jpg">
<p align="center"><b>Figura 2 - Execução do Programa</b></p>
</p><br>

<p></p> Ao analizarmos a segunda figura, podemos perceber que:<br><br>

<li>O caminho é demarcado por -1, então fica perceptível o caminho adotado pelo programa;</li>
<li>Não é possível acessar as posições de cima da matriz;</li>
<li>Quando o programa chega na última linha, ele só vai para a direita;</li>
<li>O programa finaliza quando a última posição demarcada é a da última linha e última coluna, em todas as matrizes;</li>
<li>É mostrado a soma do caminho após feita a análise de cada matriz;</li>
<li>A última atividade do programa é somar todos os caminhos das matrizes.</li>

<h2>Compilação e Execução do Programa</h2>

<p>Através do makefile, é posição utilizar comandos que realizam o processo de compilação e execução do programa. A seguir, temos alguns comandos que podem ser utilizados:</p><br>

<li><b>make</b>: Realiza a compilação do código por meio do gcc, no qual o resultado vai para a pasta build.</li><br>
<li><b>make run</b>: Executa o programa armazenado na pasta build após este ser compilado.</li><br>
<li><b>make clean</b>: Exclui a última compilação feita anteriormente na pasta build.</li><br><br>

<p>Também é possível executar o programa através do site de hospedagem de código, Replit, onde foi realizado a programação do código do "Caminho Guloso": <link>https://replit.com/@Joao-MarcosMa57/Trabalho-1-AEDS</link></p>

<h2>Considerações Finais</h2>

<p>A partir do que foi mostrado, é possível perceber que o programa não utilizou de linguagem abstrata e foi elaborado de forma simples e eficiente, utilizando apenas de 4 funções para rodar o programa e verificar o caminho com os maiores valores numéricos, soma-los e realizar a soma de todos os caminhos feitos nas matrizes. </p>

<h2>Contato</h2>

<p><i>joaomarcoshess@gmail.com</i></p>

