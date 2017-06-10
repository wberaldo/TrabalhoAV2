#include<stdio.h>

int main(){
  int MA[4][4];
  int MB[4][4];
  int i,j;
  int soma[4][4];
  int multi[4][4];
  
  printf("\nOla, meu nome eh Wellington Beraldo e minha matricula na Unilasalle eh 0050014523\n");
  
  printf("\nEntre com a primeira matriz A de 4 linhas e 4 colunas\n");
  
  for(i = 0; i <= 3; i++){
    for(j = 0; j <=3; j++){
      printf("\nMatriz A - Entre com a linha %d, coluna %d: ", i+1, j+1);
      scanf("%d", &MA[i][j]);
      soma[i][j] = MA[i][j];
      multi[i][j] = MA[i][j];
    }
    printf("\n");
  }
  
  printf("\nEntre com a segunda matriz B de 4 linhas e 4 colunas\n");
  
  for(i = 0; i <= 3; i++){
    for(j = 0; j <= 3; j++){
      printf("\nMatriz B - Entre com a linha %d, coluna %d: ", i+1, j+1);
      scanf("%d", &MB[i][j]);
      soma[i][j] = MA[i][j] + MB[i][j];
      multi[i][j] = MA[i][j] * MB[i][j];
    }
    printf("\n");
  }
  
  printf("\nObrigado, seguem os resultados que o professor Alex solicitou:\n");
  
  printf("\nSoma das duas matrizes\n\n");
  
  for(i = 0; i <= 3; i++){
    printf("(");
    for(j = 0; j <= 3; j++){
      printf("%3d", soma[i][j]);
    }
    printf("  )");
    printf("\n\n");
  }
 
  printf("\nDiagonal secundaria da Matriz A\n\n");
  
  for(i = 0; i <= 3; i++){
    printf("(");
    for(j = 0; j <= 3; j++){
      if(j == (4 - 1 - i)){
        printf("  %d", MA[i][j]);
      }
      else{
        printf("  0");
      }
    }
    printf("  )");
    printf("\n\n");
  }
  
  printf("\nMultiplicacao das duas matrizes\n\n");
  
  for(i = 0; i <= 3; i++){
    printf("(");
    for(j = 0; j <= 3; j++){
      printf("%3d", multi[i][j]);
    }
    printf("  )");
    printf("\n\n");
  }
  printf(" Dificuldade do programa : A minha maior dificuldade para fazer esse programa foi inserir os zeros na hora de mostrar a diagonal secundaria.");
  return 0;
}