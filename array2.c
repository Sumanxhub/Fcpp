// creating array and searching element in it.

#include <stdio.h>

int main() {
    int size;
     printf("Enter the size of the array: ");
     scanf("%d",&size);
     int arr[size];
     printf("Enter the elements in the array: ");
     for(int i=0; i<size;  i++) {
        scanf("%d",&arr[i]);
     }
   int found=0, search , index;

   printf("Enter the Element you want to Search: ");
   scanf("%d",&search);
   for(int j=0; j<size ; j++) {
    if(search==arr[j]) {
      found =1;
      index= j;
    } else {
      found =0;
    }
   }
if(found==1){
  printf("%d is found at %d", search, index);

} else {
  printf("%d is not found in the array",search);

}

     printf("\n");
    return 0;
}