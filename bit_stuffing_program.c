#include <stdio.h>
int main()
{
    char data[20],stuf_data[30];
    int i=0,j=0,count=0;
    printf("enter the data:");
    scanf("%s",data);
    //performing bit stuffing
    while(data[i]!='\0')
    {
        stuf_data[j]=data[i];
        if(data[i]=='1')
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(count==5)
        {
            stuf_data[++j]='0';
            count=0;
        }
        i++;
        j++;
    }
    stuf_data[j]='\0';
    printf("original data:%s",data);
    printf("\nafter bit stuffing:%s",stuf_data);
    return 0;
}
