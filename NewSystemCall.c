#include<linux/linkage.h>
#include<linux/kernel.h>
asmlinkage long sys_mycall(char* s)
{
    int i=0;
    int len=0;
    char output;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>=48&&s[i]<58){
            output='9'-s[i]+'0';
        }
        else if(s[i]>=65&&s[i]<91) {
            output='Z'-s[i]+'A';
        }
        else if(s[i]>=97&&s[i]<123) {
            output='z'-s[i]+'a';
        }
        printk("%c",output);
    }
printk("\n");
}
