#include <stdio.h>

int main(void)
{
  printf("##  Program Bahasa C Pencarian Array ## \n");
  printf("======================================= \n\n");

  int input[100], arr_count, i, num;

  printf("Input jumlah element Array: ");
  scanf("%d",&arr_count);

  printf("Input %d angka (dipisah dengan enter): \n",arr_count);

  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++){
    scanf("%d",&input[i]);
  }

  printf("\n");

  printf("Input angka yang akan dicari: ");
  scanf("%d",&num);

  // proses pencarian array
  for(i = 0; i < arr_count; i++){
    if(input[i] == num){
      printf("Angka ditemukan pada index ke-%d",i);
      break;
    }
  }

  if(i == arr_count){
    printf("Angka tidak ditemukan");
  }

  printf("\n");
  return 0;
}
