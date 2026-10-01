#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//Palindrome Checker!

/*int main(){
	char s[200];
	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);
	
	int len=strlen(s);
	if(len>0 && s[len-1]=='\n'){
		s[len-1]='\0';
		len--;
	}
	
	int left=0,right=len-1;
	bool isPalindrome= true;
	
	while (left<right){
		while (left < right && !isalnum((unsigned char) s[left])) left++;
		while(left<right && !isalnum((unsigned char)s[right])) right++;
		
		if(tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])){
			isPalindrome = false;
			break;
			}
		left++;
		right--;
	}
	if(isPalindrome) printf("Palindrome!\n");
	else printf("Not a Palindrome :( \n");
}
*/

//CAESAR CIPHER

/*char shiftChar(char c, int shift){
	if (islower((unsigned char)c)){
		return 'a' +((c-'a'+shift)%26 +26)%26;
	}
	if (isupper((unsigned char)c)){
		return 'A' + ((c-'A' +shift)%26 + 26)%26;
	}
	return c;
}

void caesar(char s[],int shift){
	for (int i=0; s[i]!='\0'; i++){
		s[i]=shiftChar(s[i],shift);
	}
}

int main(){
	char text[200];
	int key;
	
	printf("Enter message: ");
	fgets(text, sizeof(text),stdin);
	text[strcspn(text,"\n")]='\0';
	
	printf("Enter shift: ");
	scanf("%d",&key);
	
	caesar(text,key);
	printf("Encrypted: %s\n",text);
	
	caesar(text,-key);
	printf("Decrypted: %s\n",text);	
}
*/

//Word Counter

/*int countwords(const char s[]){
	int words=0;
	bool inword=false;
	
	for (int i=0; s[i]!='\0'; i++){
		if (isspace((unsigned char) s[i])){
			inword=false;}
		else if (!inword){
			inword=true;
			words++;
		}
	}
	return words;
}

int main(){
	printf("Count: %d \n",countwords("My name Mr Cheese"));
}
*/

//Freq Analyzer











