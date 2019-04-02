#include<stdio.h>
#include<conio.h>
#include<string.h>
void contar(char frase[100]);
int a=0,e=0,i=0,o=0,u=0,z=0;

int main(){
      char frase[100];
      
      printf("ESCRIBA UNA FRASE:   ");
      gets(frase);
      contar(frase);
      printf("\n\n La frase escrita es:%s",frase);
      printf("\n VOCAL   \t   Repite");
      printf("\n  A      \t    %d",a);
      printf("\n  E      \t    %d",e);
      printf("\n  I      \t    %d",i);
      printf("\n  O      \t    %d",o);
      printf("\n  U      \t    %d",u);
      printf("\n\n\n");
      switch(a){
		case 1:  printf("a"); break;
		case 2:  printf("aa"); break;
		case 3:  printf("aaa"); break;
		case 4:  printf("aaaa"); break;
		case 5:  printf("aaaaa"); break;
		case 6:  printf("aaaaaa"); break;
		case 7:  printf("aaaaaaa"); break;
		case 8:  printf("aaaaaaaa"); break;
		case 9:  printf("aaaaaaaaa"); break;
		case 10: printf("aaaaaaaaaa"); break;
		case 11: printf("aaaaaaaaaaa"); break;
		case 12: printf("aaaaaaaaaaaa"); break;
		case 13: printf("aaaaaaaaaaaaa"); break;
		case 14: printf("aaaaaaaaaaaaaa"); break;
		case 15: printf("aaaaaaaaaaaaaaa"); break;
		}
	  switch(e){
		case 1:  printf("e"); break;
		case 2:  printf("ee"); break;
		case 3:  printf("eee"); break;
		case 4:  printf("eeee"); break;
		case 5:  printf("eeeee"); break;
		case 6:  printf("eeeeee"); break;
		case 7:  printf("eeeeeee"); break;
		case 8:  printf("eeeeeeee"); break;
		case 9:  printf("eeeeeeeee"); break;
		case 10: printf("eeeeeeeeee"); break;
		case 11: printf("eeeeeeeeeee"); break;
		case 12: printf("eeeeeeeeeeee"); break;
		case 13: printf("eeeeeeeeeeeee"); break;
		case 14: printf("eeeeeeeeeeeeee"); break;
		case 15: printf("eeeeeeeeeeeeeee"); break;
		}
	  switch(i){
		case 1:  printf("i"); break;
		case 2:  printf("ii"); break;
		case 3:  printf("iii"); break;
		case 4:  printf("iiii"); break;
		case 5:  printf("iiiii"); break;
		case 6:  printf("iiiiii"); break;
		case 7:  printf("iiiiiii"); break;
		case 8:  printf("iiiiiiii"); break;
		case 9:  printf("iiiiiiiii"); break;
		case 10: printf("iiiiiiiiii"); break;
		case 11: printf("iiiiiiiiiii"); break;
		case 12: printf("iiiiiiiiiiii"); break;
		case 13: printf("iiiiiiiiiiiii"); break;
		case 14: printf("iiiiiiiiiiiiii"); break;
		case 15: printf("iiiiiiiiiiiiiii"); break;
		}
	  switch(o){
		case 1:  printf("o"); break;
		case 2:  printf("oo"); break;
		case 3:  printf("ooo"); break;
		case 4:  printf("oooo"); break;
		case 5:  printf("ooooo"); break;
		case 6:  printf("oooooo"); break;
		case 7:  printf("ooooooo"); break;
		case 8:  printf("oooooooo"); break;
		case 9:  printf("ooooooooo"); break;
		case 10: printf("oooooooooo"); break;
		case 11: printf("ooooooooooo"); break;
		case 12: printf("oooooooooooo"); break;
		case 13: printf("ooooooooooooo"); break;
		case 14: printf("oooooooooooooo"); break;
		case 15: printf("ooooooooooooooo"); break;
		}	
	  switch(u){
		case 1:  printf("u"); break;
		case 2:  printf("uu"); break;
		case 3:  printf("uuu"); break;
		case 4:  printf("uuuu"); break;
		case 5:  printf("uuuuu"); break;
		case 6:  printf("uuuuuu"); break;
		case 7:  printf("uuuuuuu"); break;
		case 8:  printf("uuuuuuuu"); break;
		case 9:  printf("uuuuuuuuu"); break;
		case 10: printf("uuuuuuuuuu"); break;
		case 11: printf("uuuuuuuuuuu"); break;
		case 12: printf("uuuuuuuuuuuu"); break;
		case 13: printf("uuuuuuuuuuuuu"); break;
		case 14: printf("uuuuuuuuuuuuuu"); break;
		case 15: printf("uuuuuuuuuuuuuuu"); break;
		}	
      
      printf("\n\n");
	  getch();
}
void contar(char frase[100]){
     //int a=0,e=0,i=0,o=0,u=0;
     for(int x=0;x<100;x++){
	switch(frase[x]){
		case 'a': a++; break;
		case 'e': e++; break;
		case 'i': i++; break;
		case 'o': o++; break;
		case 'u': u++; break;
		}
	}
}
