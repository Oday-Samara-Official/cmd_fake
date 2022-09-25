#include <stdio.h>
#include <stdlib.h>

int main()
{
    int if_con_loop = 3;
    while (if_con_loop==3){
        char comm[50];
        printf ("A:\>");
        scanf("%s",comm);
        printf("%s\n",comm,"' is not recognized as an internal or external command, operable program or batch file.");


        if (comm == "exit"){
            if_con_loop += 3;
        }
    }

    getchar();
    return 0;
}
