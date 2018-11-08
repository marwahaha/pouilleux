#include "card.h" 

// functiom who takes a array of card struct and initialize the card game 
// with TypeCarte. and set the others arguments to 0


void  setgame(struct card *game) 
{  
	int i; 
	i = 0; 
	char type; 
	type = '1'; 
	
	while( i < 12)
	{
		while(i < 9)
		{ 
			game[i].TypeCarte = type; 
			game[i].NbPair = 0; 
			game[i].Frequency = 0.0; 
			game[i].Safe = 0; 
			i++; 
			type++; 
		} 
	if(i ==  9)
		type = 'V'; 
	if(i == 10) 
		type = 'D'; 
	if(i == 11)
		type = 'R'; 
	game[i].TypeCarte = type; 
	game[i].NbPair = 0; 
	game[i].Frequency = 0.0; 
	game[i].Safe = 0; 
	i++; 
	} 
}
/*
int	main(void)
{
	struct card game[12];

	setgame(game); 
	printf("la premiere carte est %c et %d\n", game[0].TypeCarte, game[0].NbPair); 
	printf("la derniere carte est %c\net %d", game[11].TypeCarte, game[10].NbPair);
	return 0; 
} 

*/ 
