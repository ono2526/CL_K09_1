


#include <stdio.h>

int fibonacci(int);

void main(){
  int n,ans;

  printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂���(�O�ȏ�)�F");
  scanf("%d",&n);
  while(n<0){
    printf("0�ȏ�̐��l����͂��Ă��������B\n");
	 printf("�t�B�{�i�b�`����̉��Ԗڂ̒l�����߂܂���(0�ȏ�)�F");
     scanf("%d",&n);
  }

  ans = fibonacci(n);
  printf("�t�B�{�i�b�`����F(%d)�̒l��%d�ł��B\n",n,ans);
}

int fibonacci(int n){
	if(n < 0){
	   return 0;
	}else if(n == 1){
	   return 1;
	}else{
	   return (fibonacci(n - 2) + fibonacci(n - 1));
	}
}