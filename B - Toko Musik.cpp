#include<stdio.h>

struct DATA{
	int quantity;
	char music[105];
	int price;
};

long long int discount(int n, struct DATA d[]){
	long long int total = 0;
	
	for(int i=0; i<n; i++){
		total += d[i].price*d[i].quantity;
	}
	
	long long int disc = total*15/100;
	long long int tp = total - disc;
	return tp;
}

int main(){
	FILE* fp;
	fp = fopen("testdata.in", "r");
	
	struct DATA d[105];
	int tc;
	fscanf(fp, "%d\n", &tc);
	
	int n;
	for(int i=0; i<tc; i++){
		fscanf(fp, "%d\n", &n);
		for(int j=0; j<n; j++){
			fscanf(fp, "%d#%[^@]@%d\n", &d[j].quantity, d[j].music, &d[j].price);
		}
		
		printf("Customer #%d: Rp ", i+1);
		printf("%lld\n", discount(n,d));
		
	}
	fclose(fp);
	return 0;
}
