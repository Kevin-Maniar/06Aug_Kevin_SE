//#include <stdio.h>
//
//int main() {
//    char str[100];
//    char *p;
//
//    printf("Enter a name: ");
//    gets(str);   // unsafe, shown only to illustrate the bug
//
//    p = str;
//
//    while (*p != '\0') 
//	{
//        printf("%c", *p);
//        p++;
//    }
//
//    // Bug: p now points to '\0', not to a valid character
//    printf("\nFirst character after traversal: %c\n", *p);
//
//    return 0;
//}

#include <stdio.h>

int main() {
    char str[100];
    char *p = str;

    printf("Enter a name: ");
    scanf("%[^\n]", str);

    printf("First character: %c\n", *p);

    return 0;
}
