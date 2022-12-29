#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str) {
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}
char *mystery(char *str_to_find) {
	int i;
	int j;
	int len;
	int word_size;
	
	char *str_input;
	char *str_find;

	i = 0;
	j = 0;
	/*Fixed size*/
	word_size = 4;
	/*Fixed size*/

	len = ft_strlen(str_to_find);
	str_input = malloc(sizeof(char) * (len + 1));
	str_find = malloc(sizeof(char) * (len + 1));

	while (str_to_find[i]) {
		str_find[i] = '*';
		i++;
	}
	fgets(str_input, _a_, stdin);

	while (j <= _a_) {
		if (str_input[j] == str_to_find[j])
			str_find[j] =  str_input[j];
		j++;
		if (str_input[j] == '\0') {
			j = 0;
			fgets(str_input, _a_, stdin);
		}
		printf("Mystery word = %s\n\n", str_find);
		/*
		if (str_find[j] == str_to_find[j])
			return str_find;
    */
	}
	return str_find;
}

int main(void) {
	mystery("cat");
	return 0;
}
