#include <stdio.h>
int size;
void bubbleSort(int array[]) {
for (int step = 0; step < size - 1; ++step) {
 for (int i = 0; i < size - step - 1; ++i) {
if (array[i] > array[i + 1]) {
int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[]) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[100] ;

  scanf("%d",&size);
  for (int i = 0; i < size; ++i) {
    scanf("%d",&data[i]);
  }

  bubbleSort(data);

  printf("Sorted Array in Ascending Order:\n");
  printArray(data);
}
