#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    /* init queue of int-value */
    int length;
    scanf("%d", &length);
    
    int array[length];
    memset(array, 0, length*sizeof(int));
    
    int i; 
    for (i = 0; i < length; i++)
        scanf("%d", &array[i]);
      
    int n = 0;
    for (n; n < length; n++)
    	printf("%d\n", array[n]);
    
    
    /* find max value*/
    struct data_t {
        int index;
        int value;
    };
    
    struct data_t data = {
        .index = 0,
        .value = 0,
    }; 
       
    int j;
    for (j = 1; j < length - 1; j++) {
        if (array[j] < array[j+1]) {
            data.index = j + 1;
            data.value = array[j+1];
        }
    }
    
    /* replace by max */
    int count = 0, k;
    for (k = 0; k < data.index; k++) {
        if (array[k] < data.value) {
            array[k] = data.value;
            count++;
        }
    }
    
    /* caculate the sum */
    int sum = 0, h;
    for (h = 0; h < length; h++)
        sum += array[h];
    
    printf("%d %d", sum, count);
    
    /*
    int n = 0;
    for (n; n < length; n++)
    	printf("%d\n", array[n]);
    */
    return 0;
}
