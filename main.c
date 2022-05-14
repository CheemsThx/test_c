#include <stdio.h>
#include <stdint.h>

void test_c(uint8_t i,uint8_t *buf_out)
{
    for (uint8_t j = 0; j < i; j++)
    {
        buf_out[i] = j;
    }
    
}

void main(void)
{
    uint8_t temp[19];
    test_c(sizeof(temp),temp);
    for (uint8_t i = 0; i < sizeof(temp); i++)
    {
        printf("%d,",temp[i]);
    }
    printf("\n");
}