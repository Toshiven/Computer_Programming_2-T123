#include <stdio.h>
#include <string.h>
int consonants(char a[30]){
    int consonant, vow;
    char ch;
    for (int i = 0; a[i] != '\0'; i++) {
        
        ch = a[i];
  
        
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vow++;
  
        
        else if (ch == ' ')
            continue;
  
        else
            
            consonant++;

}
return consonant;
}
int vowel(char a[50]){
    int vowels = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        
        if( a[i] == 'a' ||
            a[i] == 'e' ||
            a[i] == 'i' || 
            a[i] == 'o' || 
            a[i] == 'u'    )
        {
            
            vowels++;
        }
    }
    return vowels;
}
int main(){
    char a[50];
    printf("Input sentence\n");
    scanf("%[^\n]s", a);
    printf("String length: %zu\n", strlen(a));
    printf("Vowels %d\n", vowel(a));
    printf("Consonants %d\n", consonants(a));
    return 0;
}