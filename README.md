#   KupGest

    Este projecto foi feito com o objectivo de
consolidar o meu aprendizado em Linguagem C.<br/>
    Este projecto estará disponível no meu repositório
para entusiastas, autodidatas na programação (como eu)
, estudantes, professores (para fins de estudo), analistas e críticos (em caso de querer dar um contributo).<br>

#   TOPICOS ABORDADOS PARA A REALIZAÇÃO ESTE PROJECTO<br>
    Para a realização deste projecto foi necessário alguns conhecimentos, e são estes os topicos que serão citados para aquisição desses conhecimentos:<br>
    1- Variáveis <br>
    2- Constante (const ou #define) <br>
    3- Expressõss lógicas<br>
    4- Comando de atribuição <br>
    5- Estruturas de seleção<br>
    6- Estruturas de repetição<br>
    7- Vectores<br>
    8- Cadeia de caracteres<br>
    9- Funções e Procedimentos<br>
    10- Ponteiros<br>
    11- Estruturas<br>
    12- Arquivos <br>

#   VISUAL DO PROJECTO<br>

    Visualmente o projecto apresenta dois menus de opções (um menu principal e um sub menu contendo 4 opções).<br>

## VISUAL DOS MENUS
<p>
############ MENU ############

1-Inserir dados<br>
2-Mostrar dados inseridos<br>
3-Pesquisar producto<br>
4-Outras opções<br>
0-Encerrar o programa<br>

Selecione:<br>
<p/>

<p>
############ OUTRAS OPÇÕES ############

1-Salvar ficheiro(s)<br>
2-Abrir ficheiro(s)<br>
3-Excluir ficheiro(s)<br>
0-Voltar<br>

Selecione:<br>
<p/>

### MODO DE USO (MENUS)<br>
    
    Os números a direita de cada opção representam a opção a ser selecionada.<br>

<p>
############ MENU ############

 ---
| 1 | - Inserir dados
 ---
2-Mostrar dados inseridos<br>
3-Pesquisar producto<br>
4-Outras opções<br>
0-Encerrar o programa<br>
            ---
Selecione: | 1 | (<i>Inserir dados</i>) <br>
            ---
<p/>
<p>
    A opção <i>"Inserir dados"</i> é selecionado para efeitos de inserção de dados dos productos (o nome do producto, a quantidade armazenada no stock, o preço de venda e o ID do producto)<br>
    
    A opção <i>"Mostrar dados inseridos"</i> selecionado para ilustrar/ver os dados inseridos. Os dados são apresentados em forma de uma lista. No caso em que não foi/foram inseridos dados, a lista se encontrará vazia não mostrando desse jeito nenhuma lista por estar vazia.<br>
   
   A opção <i>"Pesquisar productos"</i> é feita apenas para a pesquisa dos productos que têm os seus dados inseridos no sistema. A pesquisa é feita por meio do seu ID (do producto). Se não forem inseridos nenhum dado dos productos no sistema, nenhum producto será encontrado.
    **NOTA: se o número do ID a ser inserido for -1 em caso de nenhim dado ser inserido, o sistema apresentará dados vazios, "EMPTY" como nome do producto, "-1" como número de ID e quantidade armazenada no stock e "-1.0" no lugar do valor/preço do producto.**</br>
   
   A opção <i>"Outras opções"</i> é um sub menu, onde as opções a apresentadas são para o tratamento de arquivos (salvar, abrir e excluir arquivos) e a última opção que regressa para o menu principal.<br>
   <ul>
    <li>Salvar ficheiro(s): opção para guardar/salvar uma lista de dados inseridos em um arquivo.</li>
    <li>Abrir ficheiro(s): opção para acessar/abrir uma lista de dados inseridos em um arquivo já existente. Caso o arquivo não exista, uma mensagem de erro será retornado.</li>
    <li>Excluir ficheiro(s): opção para apagar/excluir um arquivo existente. Se o arquivo não existir, uma mensagem de erro será retornado.</li>
    <li>Voltar: opção que retorna para o menu principal.</li>
   </ul>

#   Outras informações<br>
    
    No projecto apresentado, apenas é permitido um máximo de 10 productos mas este valor pode ser superior a 10, trocando o valor de *MAX_P (MAX_P = MAXIMO PRODUCT, apreviações em inglês)* que se encontra no arquivo do cabeçalho *"header.h"* com o valor 10.<br>
    O valor de *"MAX_CHR"* revela o número de caracteres que a(s) string(s) pode suportar (*MAX_CHR = MAXIMO CHARACTERE, apreviação em inglês*).<br>

#   MODO DE USO (MAKEFILE)<br>
    
    Para a criação do executável é necessário que criar os arquivos objectos <i>".o"</i> e o comando <u>make</u> criando os arquivos objectos e o executável <u>KupGest</u>. Os arquivos objecto estarão no diretório dos arquivos *".c"* e o executável no diretório kupgest.<br>
    
    Para a remoção dos arquivos objectos <i>".o"</i> sem a remoção do executável, execute o comando <u>make clean</u>.
    E para a remoção dos arquivos objectos e do executável, execute o comando <u>make fclean</u>.
