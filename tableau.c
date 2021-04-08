#include <stdio.h>

#define N 50





int main(void)
{
	/* On définit et initialise un tableau de 50 entiers */
    int tab[N] = {21, 49, 64, 96, 39,
                  79, 22, 25, 58, 99,
                  70, 78, 23, 88, 73,
                  12, 19,  8,  9, 46,
                  12, 59, 66, 87, 66,
                  80, 38, 90, 72, 50,
                  78, 95, 43, 93, 21,
                  37, 12, 62, 95, 94,
                   5, 98, 74, 43, 15,
                  96, 43,  8, 31, 25};


    // Question 1 :  
             
    int table = 0;
    for ( int i = 0; i < N ; i++ ) { 
		table += tab[i];
		 
	}printf("%d\n", table );
	


	//Question 2 : 
	
	float moy = 0;
	moy = table / N;

	printf("%2.f\n", moy );


	int min;

	for (int i = 0: i < N;++i)
	{
		
	}
	
	// Question 5 : 

/*	{
		if (tab[i] % 5 == 0)
		{
			tab[i] = -1;
		}
	}
	// Question 6 : 
	int tab2[10][5] = {};
	for (int i = 0; i < N; i++)
	{
		tab2[i/5][i % 5] = tab[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}printf("%d\n",tab2[10][5] );
*/
}