#include <stdio.h>
int main() {
  int n;

  printf("How many numbers you wanna enter?\n ");
  scanf("%d", &n);
  double numbers[n];


  for (int i = 0; i < n; i++)
    {
    printf("Enter number %d: ", i + 1);
    scanf("%lf", &numbers[i]);
    }
  for(int j=0;j<n;j++)
    {
    if (numbers[0] < numbers[j])
        {
        numbers[0] = numbers[j];
        }
    }

  printf("Biggest number is = %.0lf", numbers[0]);

  return 0;
}
