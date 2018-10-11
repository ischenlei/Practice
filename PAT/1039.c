#include <stdio.h>
#include <string.h>

int main()
{
	char vx[1000], vy[1000];
	int i, cont1 = 0, cont[150] = {0};

	scanf("%s", vx);
	scanf("%s", vy);
    int lenx = strlen(vx);
    int leny = strlen(vy);
	for (i = 0; i < lenx; i++)
        cont[vx[i]]++;
    for (i = 0; i < leny; i++) {
        cont[vy[i]]--;
        if (cont[vy[i]] < 0)
            cont1++;
    }

	if (cont1 == 0)
        printf("Yes %d", lenx - leny);
    else
        printf("No %d", cont1);

    return 0;
}
