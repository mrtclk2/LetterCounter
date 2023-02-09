#include <stdio.h>
#include <string.h>

int main()
{
    char metin[100];
    int harfler[26] = {0};

    printf("Lutfen bir metin giriniz: ");
    scanf("%[^\n]s", metin);
    


    for (char ww = 'a'; ww <= 'z'; ww++)
    {
        char *p = strchr(metin, ww);
        while (p)
        {
            harfler[ww - 'a']++;
            p = strchr(p + 1, ww);
        }
    }
    for (char ww = 'a'; ww <= 'z'; ww++)
    {
        printf("%c harfi %d tane vardır.\n", ww, harfler[ww - 'a']);
    }
    return 0;
}
