#include <stdlib.h>

int ft_strlen(char *str) {
	int count;
	count = 0;

	while (str[count])
		count++;
	return count;
}

char *reverse_string(char *str) {
	int length;
	int i;
	char *new_str;

	i = 0;

	if (!str)
		return NULL;

	length = ft_strlen(str);
	new_str = malloc(sizeof(char) * (length + 1));
	
	if (!new_str)
		return NULL;
	
	length--;

	while(length >= 0){
		new_str[i] = str[length];
		i++;
		length--;
	}
	new_str[i] = '\0';
	return new_str;
}
