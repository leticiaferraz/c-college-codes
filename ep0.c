#include <stdio.h>

/* Tutorial do IME USP
https://panda.ime.usp.br/panda/static/data/codeblocks/codeblocksintro.html
*/

/**************************************************************************/
/**                                                                      **/
/**   Letícia Pacheco Ferraz de Arruda e Oliveira    Número USP 11847666 **/
/**   Exercício-Programa EP0                                             **/
/**   Professor: Yoshiharu Kohayakawa                                    **/
/**   Turma: 3                                                           **/
/**                                                                      **/
/**************************************************************************/

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
