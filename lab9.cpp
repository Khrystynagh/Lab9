#include <cstring>

void addSpace(char* str,int index)
{
    int length = strlen(str);
    
    for(int i = length+1;i>index;i--)
    {
        str[i] = str[i-1];
    }
    return;
}

int task(char* str)
{
    int index = 0;
    int count = 0;
    while(strlen(str) < 60)
    {
        if(str[index] == NULL)
        {
            index = 0;
        }
        
        if(str[index] == ' ' && str[index+1] != ' ')
        {
            addSpace(str,index);
            index++;
            count++;
        }
        
        index++;
    }
    
    return count;
}