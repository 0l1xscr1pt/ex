#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *str) {
    size_t i;

    i = 0;
    while(str[i] != ' ') {
        i++;
    }
    return i;
}

char *find_short(char *str){
    int i;
    int j;
    int k;
    int *size = malloc(sizeof(char) * ft_strlen(str));
    char stock_str[*size][/*size of word stock in var*/];

    i = 0;
    j = 0;
    k = 0;

    while(str[i] && str[i] != ' ') {
        printf("i = %d, j = %d, k = %d\n", i, j, k);
        stock_str[j][k] = str[i];
        i++;
        k++;
        
        if (str[i] == ' ') {
            i++;
            j++;
            k = 0;
        }
    }
    stock_str[i] = '\0';
    printf("%s", stock_str);
  
    return "";
}
