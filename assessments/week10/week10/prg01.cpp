#include <stdio.h>

char FirstUniqueChar(char* str) {
    int freq[26] = { 0 }; 

    
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            return str[i];
        }
    }

   
    return ' ';
}

int main() {
    char str1[] = "appliedmaterials";
    char str2[] = "abacbc";

    printf("First unique character in '%s': %c\n", str1, FirstUniqueChar(str1));
    printf("First unique character in '%s': %c\n", str2, FirstUniqueChar(str2));

    return 0;
}
