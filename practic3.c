#include <stdio.h>
#include <stdbool.h>
//check are it letter ?
static int is_letter_ascii(char c) {
    return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

// check are it vowel?
static bool is_vowel_ascii (char c){
	return (c==65||c==69||c==73||c==79||c==85||c==89 ||c==97||c==101||c==105||c==111||c==117||c==121);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
    char s[1024];     // buffer
    int consonants = 0;
    printf("Enter text (ASCII only): ");
    if (!fgets(s, sizeof s, stdin)) return 1;

    for (size_t i = 0; s[i] != '\0'; ++i) {
        if (is_letter_ascii(s[i]) && !is_vowel_ascii(s[i])) {
            ++consonants;
        }
    }
    printf("\n");
    printf("Consonants: %d\n", consonants);
    return 0;
}
