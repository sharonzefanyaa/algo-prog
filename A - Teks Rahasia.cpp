#include <stdio.h>
#include <string.h>

int x;
int y;
int count;

int countWords(char words){
	int n = 0;
	if(words>='a' && words<='z'){
		n = words - 'a' + 1;
	}
	else if(words>='A' && words<='Z'){
		n = words - 'A' + 1;
	}
	return n;
}

void position(int h, int m, int temp){
	int total = h*60+m;
	if(total>720){
		temp*=-1;
	}
	else{
		temp = temp;
	}
}

int main(){
	int h1, m1;
	char s1[10005];
	scanf("%d:%d>%[^\n]", &h1, &m1, s1); getchar();
	
	x=0; y=0; count=0;
	for(int i=0; i<strlen(s1); i++){
		if(count==m1/10 || count==m1%10){
			x += countWords(s1[i]);
			if(m1/10==m1%10){
				x += countWords(s1[i]);
			}
		}
		if(x>180){
			x = x-180;
		}
		if(s1[i] == ' '){
			count++;
		}
		position(h1, m1, x);
	}
	
	int h2, m2;
	char s2[10005];
	scanf("%d:%d>%[^\n]", &h2, &m2, s2); getchar();
		
	x=0; y=0; count=0;
	for(int i=0; i<strlen(s2); i++){
		if(count==m2/10 || count==m2%10){
			y += countWords(s2[i]);
			if(m2/10==m2%10){
				y += countWords(s2[i]);
			}
		}
		if(x>180){
			y = y-180;
		}
		if(s2[i] == ' '){
			count++;
		}
		position(h2, m2, y);
	}

	printf("Case #1: %d,%d\n", x, y);
	return 0;
}
