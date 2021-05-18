#include<stdio.h>
#include<cs50.h>
int main(void){
  int i,j,k;
  int option = get_int(" ");
  int rows = get_int(" ");
  switch(option){
    case 1:
    	for(i=0;i<rows;i++){
    	  for(j=rows-i;j>0;j--){
    	    printf("#");
    	  }
	      printf("\n");
	}
	break;
    case 2:
    	for(i=0;i<rows;i++){
    	  for(j=rows-(i+1),k=0;j>0;k++,j--){
    	    printf(" ");
	  }
	      for(j=k;j<rows;j++){
	        printf("#");
	      }
          printf("\n");
	}
	break;
  } 
}
