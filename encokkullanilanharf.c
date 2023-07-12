#include <stdio.h>
#include <stdlib.h>





int main() {
char dizi[100];
fgets(dizi,100,stdin);
int sayac[26]={0};
int i;
for(i=0;i<strlen(dizi);i++){
	if(dizi[i]>='a'&&dizi[i]<='z')
	sayac[dizi[i]-'a']++;
	if(dizi[i]>='A'&&dizi[i]<='Z')
	sayac[dizi[i]-'A'];
}
for(i=0;i<26;i++){
	printf("%c/%c %d kez var\n",'a'+i,'A'+i,sayac[i]);
	
}
int max=sayac[0];
int maxindex=0;
for(i=1;i<26;i++){
	
	if(sayac[i]>max){
		max=sayac[i+1];
	    maxindex=i;	
	}
	
}
printf("cumlede en cok kullanýlan karakter %c %c dir %d kez kullanilmistir",'a'+maxindex,'A'+maxindex,max);
	
	return 0;
}
