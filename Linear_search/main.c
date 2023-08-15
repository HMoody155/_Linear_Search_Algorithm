#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef signed int sint32;

uint32 Arr[10] = {11, 44, 33, 6, 55, 7, 8, 99, 66, 10};
uint32 LinearSearchAlgorithm1(uint32 ArrData[], uint32 ArrLen, uint32 Req_Val);
uint32 LinearSearchAlgorithm2(uint32 ArrData[], uint32 ArrLen, uint32 Req_Val);


int main()
{
    sint32 Ret = 0;
    Ret = LinearSearchAlgorithm2(Arr, 10, 99);
    printf("%i\n", Ret);
    Ret = LinearSearchAlgorithm2(Arr, 10, 100);
    printf("%i\n", Ret);
    Ret = LinearSearchAlgorithm2(Arr, 10, 6);
    printf("%i\n", Ret);
    
    return 0;
}
uint32 LinearSearchAlgorithm1(uint32 ArrData[], uint32 ArrLen, uint32 Req_Val)
{
    uint32 Index = 0;
    for ( Index = 0; Index < ArrLen; Index++)
    {
        if ((ArrData[Index]) == Req_Val)
        {
            return Index;
        }
        else{}
    }
    return (-1);
}

uint32 LinearSearchAlgorithm2(uint32 ArrData[], uint32 ArrLen, uint32 Req_Val)
{
    uint32 Left = 0;
    uint32 Right = ArrLen - 1;
    for ( Left = 0; Left <= Right; Left++)
    {
        if (Req_Val == (ArrData[Left]))
        {
            return (Left);
        }
        else{}
        if (Req_Val == (ArrData[Right]))
        {
           return (Right);
        }
        else{}      
        Right--;  
    }

    return -1;
}