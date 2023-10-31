#include <stdio.h>

int binsearch(int x, int v[], int n);

void main()
{
  int num[10];
  int searchKey;
  int n;
  
  printf("Enter the no of elements\n");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for (int i=0; i<n; i++)
    scanf("%d", &num[i]);
  printf("Enter the element to be searched\n");
  scanf("%d", &searchKey);
  
  int result = binsearch(searchKey, num, n);

  if (result == -1)
      printf("No match found\n");
  else
      printf("Match found in position %d\n", result);


 }

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;

    }
    return -1; /* no match */
 }
