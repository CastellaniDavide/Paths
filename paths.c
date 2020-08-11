/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 300001

// input data
int N, M, i;
int X[MAXN], Y[MAXN], A[MAXN], B[MAXN];

int main() {
  //  uncomment the following lines if you want to read/write from files
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  for (i = 0; i < N - 1; i++) assert(2 == scanf("%d %d", &X[i], &Y[i]));
  assert(1 == scanf("%d", &M));
  for (i = 0; i < M; i++) assert(2 == scanf("%d %d", &A[i], &B[i]));

  // insert your code here

  printf("%d\n", 42);  // change 42 with actual answer
  return 0;
}
