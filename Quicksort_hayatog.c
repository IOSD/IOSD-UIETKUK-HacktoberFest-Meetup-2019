#include <stdio.h>

int separa( int v[], int p, int r )
{
  int c = v[p], i = p+1, j = r, t;

  while(1)
  { 
    while(i <= r && v[i] <= c) ++i;

    while(c < v[j]) --j;

    if (i >= j) break;

    t = v[i], v[i] = v[j], v[j] = t;

    ++i; --j;
  }

  v[p] = v[j], v[j] = c;

  return j;

}

void quicksort( int v[], int p, int r)
{
  int j;
  if (p < r)
  {
    j = separa(v, p, r);
    quicksort(v, p, j-1);
    quicksort(v, j+1, r);
  }
}

//To test, you have to remove the comments.
/*
int main(void)
{

  int vetor[] = {5,10,4,3,9,40,30,25,14,8};
  int p = 0;
  int r = 9;
  int i;

  printf("[");
  for(i = 0; i < 10; i++)
  {
    printf(" %d ", vetor[i]);
  }
  printf("]\n");

  quicksort(vetor, p, r);

  printf("[");
  for(i = 0; i < 10; i++)
  {
    printf(" %d ", vetor[i]);
  }
  printf("]");


  return 0;
}*/
