#include <stdio.h>
#include <string.h>

char room[3][10][50] = {
    {"비전홀", "본관", {1}},
    {"비전홀", "본관", {1}},
    {"비전홀", "본관", {1}},
    {"비전홀", "본관", {1}},
};


int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10 && room[i][j] != "\0"; j++)
        {
            puts(room[i][j]);
        }
        printf("\n");
    }
    return 0;
}