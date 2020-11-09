/*
  Observações:
    FUNCIONALIDADE:
    
      esse codigo no está completo, ele é apenas uma busca binaria que visa achar o melhor tempo para comer
      ---todas as pipocas. Para isso é utilizado uma busca binaria entre dois valores, um minimo e um maximo
      ---em que os competidores podem comer todas as pipocas, ou seja, ao invez de buscar diretamente o melhor
      ---valor, é chutado um tempo em que o usuario possa comer todas as pipocas. Se não for possivel comer em
      ---um tempo X, então fazemos busca binaria a direita do valor X. Se for possivel comer, fazemos uma busca
      ---para a esquerda para saber se ha um tempo melhor para comer todas as pipocas.
      
    O array sacos[] é um array global em que seu inesimo elemento é quantidade de pipocas do ineximo saco
    
    Os valores inicio e fim representam um intervalores de valores possiveis para comer todas as pipocas,
    ---asscim como o valor meior representa um valor do meio desse intervalor
   
    Sumario parametros:
      inicio: primeira tempo da busca binaria
      fim: ultimo tempo da busca binaria
      quant_pipocas: soma da quantidade de pipocas em todos os sacos
      quant_competidores: quantidade de competidores da equipe
      pipoca_segundo: quantidade de pipocas comidas por segundo
      quant_sacos: quantidade de sacos de pipoca para a equipe comer
      
    Ps: A busca binaria tambem pode demorar bastante, tendo em vista que os valores de inicio e fim são
    ---1 e 1.000.000.000 no pior caso, sendo assim, tem que buscar valores para inicio e para fim de forma que
    ---o intervalo seja menor
*/


long long int funcao (long long int inicio, long long int fim, long long int quant_pipocas,
            long long int quant_competidores, long long int pipoca_segundo, long long int quant_sacos){

    long long int vel = quant_competidores * pipoca_segundo; //quantidade de pipocas comidas em 1 instante de tempo
    long long int meio = inicio + ( (fim - inicio)/2 );      //recebe o tempo do meio da busca binaria

    if (inicio == fim) return fim; //se o valor do INICIO e do FIM forem iguais então achamos o melhor tempo
    
    if (vel * meio < quant_pipocas){  //Se com MEIO tempo não for possivel comer todas as pipocas então o tempo neccessario  maior
        return funcao (meio+1, fim, quant_pipocas, quant_competidores, pipoca_segundo, quant_sacos);
    }

    long long int copy_quant_competidores = quant_competidores; //Faz um copia para nao modificar o valor original
    long long int meta = meio * pipoca_segundo;                 //Quantidade de pipocas que um competidor pode comer no maximo em MEIO tempo

    for (long long int i = 0; i < quant_sacos; i++){
        if (meta - sacos[i] < 0){
            meta = meio * pipoca_segundo;
            copy_quant_competidores--;
            if (copy_quant_competidores == 0) {

                return funcao(meio+1, fim, quant_pipocas, quant_competidores, pipoca_segundo, quant_sacos);
            }
        }
        meta -= sacos[i];
    }
    return funcao (inicio, meio, quant_pipocas, quant_competidores, pipoca_segundo, quant_sacos);

}
