//Uriel Enrique Nolasco Guzmán 23310274 
//Ejercicio 

#include<stdio.h>
#include<iostream>
#include<conio.h>

int main( )
{
	int x=0;
	int y=0;
	int i=0;
	char k;
	char e=254;
		
		//loop 
		
	while(1){
		
		//user input
		
		k=getch();
		
		//process data
		
				if(k=='w')
			if(y>=1)
				y--;
		if(k=='a')
			if(x>=1)
				x--;
		if(k=='s')
			y++;
		if(k=='d')
			x++;
		system("cls");
	
	    //render
	
		while(i!=y){
			printf("\n");	
			i++;
		}
		i=0;
		while(i!=x){
			printf(" ");
			i++;
		}
		i=0;
		
		printf("%c",e);
		
		if(k=='p'){
		break;
		}else if (k=='P')
		break;
		
}
	return 0;
}
