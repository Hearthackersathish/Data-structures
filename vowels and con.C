#include <stdio.h>
int main()
{
  int i, count = 0;
  char s[1000];

  printf("Enter the sentence to count vowels :");
  gets(s);

  for(i=0;s[i]!='\0';i++){
    if (s[i] == 'a' || s[i] == 'A' ||
        s[i] == 'e' || s[i] == 'E' || 
	   s[i] == 'i' || s[i] == 'I' || 
	   s[i] == 'o' || s[i] == 'O' || 
	   s[i] == 'u' || s[i] == 'U')
      count++;
  }
  printf("Number of vowels in the sentence: %d", count);
  return 0; 
}
