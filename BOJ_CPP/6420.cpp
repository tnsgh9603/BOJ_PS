#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define M 40
typedef unsigned short lem;
typedef lem bn[M];

int ba(int len, bn x, lem car)
{
    int i;
    lem y;

    i = 0;
    do {
        y = x[i];
        y += car;
        x[i] = y % 1000;
        car =  y / 1000;
    } while (++i < len && car);
    if (car) {
        len++;
        x[i] = car;
    }
    return len;
}

int bdec(int len, bn x)
{
    int i;
    lem car, y;

    i = 0;
    do {
        y = x[i];
        if (y == 0)
            y = 999;
        else {
            car = 0;
            y--;
        }

        x[i] = y;
    } while (++i < len && car);

    if (len != 1 && i == len) {
        if (x[i-1] == 0)
            len--;
    }

    return len;
}


int bm(int len, bn x, lem y)
{
    int i;
    lem z, car;

    i = 0;
    car = 0;
    do {
        z = x[i];
        z = z*y + car;
        x[i] = z % 1000;
        car =  z / 1000;
    } while (++i < len);
    if (car) {
        len++;
        x[i] = car;
    }
    return len;
}

int bd(int len, bn x, int *leny, bn y, lem d)
{
    int i;
    lem z, car;

    car = 0;

    for (i = len - 1; i >= 0; i--) {
        z = x[i] + car*1000;
        car = z % d;
        y[i] = z / d;
    }

    i = len - 1;
    while (i > 0 && y[i] == 0)
        i--;

    *leny = i + 1;

    return car;
}

void bp(int len, bn x)
{
    int i;
/*	printf("|%d| = %d",len, arr1[len - 1]);*/
    printf("%d",x[len - 1]);
    for (i = len - 2; i >= 0; i--) {
        printf(",%03d",x[i]);
    }
    putchar('\n');

}

#define MAXS (M - 3)

int getline(char *s)
{
    int n;

    if (fgets(s,MAXS,stdin) == NULL)
        return 0;

    n = strlen(s);
    if (n == 0) return 0;
    n--;
    while (n>=0 && s[n] == '\n') n--;
    s[++n] = 0;
    return n;
}

int main(void)
{
    bn x, y[2];
    int xl, yl[2];
    int i, j;
    int rem;
    char s[M], t[M];
    int c;
    int sl;

/*
	printf("%d %d\n",sizeof(y),sizeof(y[0]));
	return 0;

	arr1[1]=2;
	arr1[0]=3;
	*xl=2;

	rem = 0;
	for (i = 0; i < 10; i++) {
	 bp(xl,arr1);
	 xl = bdec(xl,arr1);
	}

	bp(xl,arr1);
	return 0;
*/
    while (1) {
        sl = getline(s);
        c = s[0];
        if (c == '*') break;

        if (isalpha(c)) {
            xl = 1;
            x[0] = 0;

            for (i = 0; i < sl; i++) {
                xl = bm(xl,x,26);
                xl = ba(xl,x,s[i]-'a'+1);
            }
        } else {
            i = sl - 1;
            j = 0;
            while (i >= 0) {
                y[0][j] = s[i--] - '0';
                if (i<0) {
                    j++;
                    break;
                }
                y[0][j] += 10*(s[i--] - '0');
                if (i<0) {
                    j++;
                    break;
                }
                y[0][j] += 100*(s[i--] - '0');
                j++;
            }
            xl = yl[0] = j;
            memcpy(x,y[0],sizeof(x));

            yl[1] = 1;
            y[1][0] = 0;
/*			bp(xl,arr1);*/

            j = 10000;
            i = 0;
            while (1) {
                /*	printf("i = %d\n",i);*/
/*				bp(yl[(i%2)],y[(i%2)]);		*/
/*				bp(yl[1],y[1]);		*/
                if (yl[i%2] == 1 && y[i%2][0] == 0)
                    break;
                yl[i%2] = bdec(yl[i%2],y[i%2]);
                rem = bd(yl[i%2],y[i%2],&yl[(i+1)%2],y[(i+1)%2],26);
/*				printf("rem = %d\n",rem);*/
                t[i++] = rem + 'a';
            }
            t[i] = '\0';
            j = i - 1;

            for (i = 0; i <= j; i++)
                s[i] = t[j-i];
            s[j + 1] = '\0';
        }
        printf("%-20s  ",s);
        bp(xl,x);
    }

    return 0;
}