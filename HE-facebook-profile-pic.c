#include <stdio.h>
#include <stdlib.h>
struct dim {
	long w;
	long h;
};

typedef struct dim d;
int main()
{
	long l,n;
	int i;
	scanf ("%ld",&l);
	scanf ("%ld",&n);
	d *a;
	a = (d *)malloc(n*sizeof(d));
	for(i=0; i<n; i++) {
		scanf("%ld %ld", &((a+i)->w),&((a+i)->h));
	}
	for (i=0;i<n;++i) {
		if ( ((a+i)->w)<l || ((a+i)->h)<l )
			printf ("UPLOAD ANOTHER\n");
		else if ( ((a+i)->w)>=l && ((a+i)->h)>=l && (((a+i)->w) == ((a+i)->h) ) )
			printf ("ACCEPTED\n");
		else if ( ((a+i)->w)>l && ((a+i)->h)>=l && (((a+i)->w) != ((a+i)->h) ) )
			printf ("CROP IT\n");
		else if ( ((a+i)->w)>=l && ((a+i)->h)>l && (((a+i)->w) != ((a+i)->h) ) )
			printf ("CROP IT\n");
		else
			;
	}
    free (a);
    return 0;
}
