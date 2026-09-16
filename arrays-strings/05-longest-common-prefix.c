#include <stdio.h>
#include <string.h>

int main() {
    char strs[][20]= {"flower", "flow", "flight"};
    int n = 3;

    int i = 0;

    while (strs[0][i] != '\0') {
        char ch = strs[0][i];

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != ch || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                printf("%s\n", strs[0]);
                return 0;
            }
        }

        i++;
    }

    printf("%s\n", strs[0]);

    return 0;
}