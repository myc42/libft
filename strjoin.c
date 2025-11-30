
char *ft_strjoin(const char *s1, const char *s2)
{
   	size_t s1len; 
	size_t s2len;
	size_t i ;
	size_t j;
    	char *ssmalloc;

    
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);

    // Allocation de mémoire 
    ssmalloc = malloc(s1len + s2len + 1); // +1 pour le caractère '\0'
    if (!ssmalloc)
        return NULL;

    //  première chaîne dans le résultat
    i = 0;
    while (i < s1len) {
        ssmalloc[i] = s1[i];
        i++;
    }

    //  deuxième chaîne dans le résultat
    j = 0;
    while (j < s2len) {
        ssmalloc[i] = s2[j];
        i++;
        j++;
    }

    
    ssmalloc[i] = '\0';

    return (ssmalloc);
}

