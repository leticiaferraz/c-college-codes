#include <stdio.h>

/* Tutorial do IME USP
https://panda.ime.usp.br/panda/static/data/codeblocks/codeblocksintro.html
*/

/***********************************************************************************************/
/**   Exercício-Programa EP0                                                                  **/
/**   Professor: Yoshiharu Kohayakawa                                                         **/
/**   Os numeros de Tetranacci T0, T1, T2, ... sao defidos da seguinte forma: T0 = 0, T1 = 0, **/
/** T2 = 0, T3 = 1 e, para N > 3, temos TN = T_N-1 + T_N-2 + T_N-3 + T_N-4                    **/
/** Essa sequencia de numeros comeca portanto assim: 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, ...      **/ 
/** Seu EP0 deve ser um programa em C que l^e um inteiro N  0 e imprime TN.                  **/                                                                 **/
/**********************************************************************************************/

int main () { /*Tretranacci*/

    int t0 = 0; /* dado */
    int t1 = 0; /* dado */
    int t2 = 0; /* dado */
    int t3 = 1; /* dado */
    int n; /* inserido, n>=0 */
    int tn; /* exibe */
    int i = 3; /* contador do while */

  printf("Digite N: ");
  scanf("%d", &n);

  if (n==0){
    printf("Tetranacci T(%d): %d\n", n, t0);
  } else if (n==1){
    printf("Tetranacci T(%d): %d\n", n, t1);
  } else if (n==2){
    printf("Tetranacci T(%d): %d\n", n, t2);
  } else if (n==3){
      printf("Tetranacci T(%d): %d\n", n, t3);
  } else {

  while (i<n) {
    tn = t0+t1+t2+t3;
    t0=t1;
    t1=t2;
    t2=t3;
    t3=tn;
    i++;
    }
  printf("Tetranacci T(%d): %d\n", n, tn);
  }
  return 0;
}
