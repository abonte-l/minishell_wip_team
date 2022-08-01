
#include "../inc/libft.h"

char *ft_strtok(char *chaine, char *delim)
{

	(void)delim;
	static char *p;
	static int offset;
	char separateur = ' ';

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
		char *sep = strchr(p, separateur);
		if(sep == NULL)
		  sep = strchr(p,'\0');
		*sep = '\0';
		offset = sep - p + 1;
		return p;
	}
	else
		offset = 0;
	return NULL;
}
 
// char	*ft_strtok(char *str, char *delim)
// {
// 	int j;
// 	int i;
// 	char *tok;

// 	i = 0;
// 	tok = NULL;
// 	if (!str || !delim)
// 		return (NULL);
// 	while (str[i]) {
// 		j = 0;
// 		while (delim[j]) 
// 		{
// 			if (str[i] == delim[j]) {
// 				tok = ft_strndup(str, i);
// 				return (tok);
// 			}
// 			++j;
// 		}
// 		++i;
// 	}
// 	return (ft_strdup(str));
// }

// static char	*tmp_ptr = NULL;



// char	*ft_strtok(char *str, char *delim)
// {
	// char *final_ptr;
	// static int flag = 0;
	
	// final_ptr = NULL;
	// if (delim == NULL)
		// return NULL;
	// if (flag == 1)
	// {
		// flag = 0;
		// return (NULL);
	// }
	// if (str != NULL)
		// tmp_ptr = str; 
	// final_ptr = tmp_ptr;
	// size_t i;
	// size_t j;
	// size_t k;
	// size_t l;

	// i = 0;
	// j = 0;
	// k = 0;
	// l = 0;
// //	flag = flag;
	// while (i <= (k = ft_strlen(tmp_ptr)))
	// {
		// j = 0;
		// while (j < (l = ft_strlen(delim)))
		// {
			// if (tmp_ptr[i] == '\0') 
			// {
				// flag = 1;
				// return (final_ptr);
			// }
			// if ((tmp_ptr[i] == delim[j])) 
			// {
				// tmp_ptr[i] = '\0';
				// tmp_ptr += i+1;
				// return (final_ptr);
			// }
			// j++;
		// }
		// i++;
	// }
	// return NULL;
// }


