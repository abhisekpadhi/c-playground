#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int i, l=0, flag=0;
    scanf ("%s",s);

    for (i=0,l=strlen(s); i<l ;i++) {
    	if (s[i] != s[l-1-i]) {
    		flag = 1;
    		break;
    	}
    }

    if (flag)
    	printf ("NO");
    else
    	printf ("YES");
    return 0;
}
