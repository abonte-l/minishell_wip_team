
#include "../inc/libft.h"

/*
** j'ai recoder en prenant une base plus simple du coup ca fonctionne, mais il
** faut du coup que je remodifie vu que j'ai plus plusieurs delimiteurs
*/


char *ft_strtok(char *chaine, char *delim)
{

	(void)delim;
	static char *p;
	static int offset;
	char separateur = ' ';
	char *sep;

	sep = NULL;
  /* premier appel avec une chaine*/
	if(chaine != NULL)
	{
		p = chaine;
		offset = 0;
	}
  /* appels suivants */
	else
		p += offset;
	if(*p != '\0')
	{
		sep = strchr(p, separateur);
		if(sep == NULL)
		  sep = strchr(p,'\0');
		*sep = '\0';
		offset = sep - p + 1;
		return p;
	}
	else
		offset = 0;
	return NULL;



// 	(void)delim;
// 	static char *p;
// 	static int offset;
// 	char separateur = ' ';

//   /* premier appel avec une chaine*/
// 	if(chaine != NULL)
// 	{
// 		p = chaine;
// 		offset = 0;
// 	}
//   /* appels suivants */
// 	else
// 		p += offset;
// 	if(*p != '\0')
// 	{
// 		char *sep = strchr(p, separateur);
// 		if(sep == NULL)
// 		  sep = strchr(p,'\0');
// 		*sep = '\0';
// 		offset = sep - p + 1;
// 		return p;
// 	}
// 	else
// 		offset = 0;
// 	return NULL;
}
