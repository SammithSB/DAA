
#include <stdio.h>
#include <string.h>

int find(char *text, char *pat)
{
    int n = strlen(text);
    int m = strlen(pat);
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && text[i + j] == pat[j])
        {
            j++;
        }
        if (j == m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char txt[] = "hi hello namskara";
    char pat[] = "helloz";
    int reas = find(txt, pat);
    if (reas != -1)
    {
        printf("Pattern found at index %d", reas);
    }
    else
    {
        printf("pattern not in the text");
    }
}
