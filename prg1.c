#include<stdio.h>
#define len 50
 int string_comparison(const char*, char*);
 int main()
{
     char str1[len], str2[len];
     int result;
     int (f_ptr)(const char,char*);
     printf("\n Enter first string:- ");
     scanf("%s",str1);
     printf("\n Enter second string:- ");
     scanf("%s",str2);
     f_ptr = &string_comparison;
     result =f_ptr(str1, str2);
     if(result == 0)
     printf("\n Two strings entered are same.\n");
	else
     printf("\n The strings entered are different.\n");
       return 0;
}
 int string_comparison(const char *string1, char *string2)
{
     while (*string1 == *string2)
{
     if (*string1 == '\0' || *string2 == '\0')
     break;
     string1++;
     string2++;
}
 if (*string1 == '\0' && *string2 == '\0')
 return 0;
 else
 return -1;
}