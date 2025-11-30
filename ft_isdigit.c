#include <stdio.h>
#include <unistd.h>

int ft_isdigit(int character){

	if(character < 0 || character > 9)

	{
		return (0) ;
		
	}

	return (1) ; 

}


