#include <stdio.h>
#include <stdlib.h>

int main() {
  // The following is just a single test case. Not meant to be exhaustive.
  int nums[7] = {0,1,1,1,1,1,3};
  int* indices = twosum(nums, 7, 5, 2);
  if (!indices) {
    printf("no indices found.\n");
    exit(1);
  }
  printf("The indices are: ");
  int i;
  for (i = 0; i < 2; i++){
    printf("%i ", indices[i]);
  }
  printf("\n");
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *valores = malloc(sizeof(int) * *returnSize);
    if (valores == NULL){
    return NULL;
  }
    for (int i = 0; i < numsSize; i++)
    {
      for (int j = 0; j < numsSize; j++)
      {
            if ((nums[i] + nums[j]) == target)
            {
                valores[0] = i;
                valores[1] = j;
            }
        return valores;
    }
    }
    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}