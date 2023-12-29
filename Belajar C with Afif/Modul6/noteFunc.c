#include <stdio.h>
#include <stdbool.h>

void myFunction(int myNumbers[5]){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    
}

int main()
{
    int myNumbers[5]={10,20,30,40,50};
    myFunction(myNumbers);
}
