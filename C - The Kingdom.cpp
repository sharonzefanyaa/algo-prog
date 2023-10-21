#include <stdio.h>

char map[105][105];
int n, m, kingdom;

void floodfill(int j, int k){
	//basecase
	if(map[j][k] == '#' || j<0 || k<0 || j>=n || k>=n){
		return;
	}
	
	if(map[j][k] == '.'){
		kingdom++;
	}
	
	map[j][k] = '#'; //flag
	
	floodfill(j, k+1); // right
	floodfill(j, k-1); // left
	floodfill(j-1, k); // up
	floodfill(j+1, k); // down
	
}

int main(){
	scanf("%d %d", &n, &m); getchar();
		
	for(int i=0; i<n; i++){
		scanf("%s", map[i]); getchar();
	}
	
	char temp = '0';
	for(int i=0; i<m; i++){	
		kingdom = 0;
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				temp = i + 97;
				if(map[j][k] == temp){
					floodfill(j, k);
					kingdom++;
				}
			}
		}
		printf("%c %d\n", temp, kingdom);
	}
		
	return 0;
}

//5 3
//#####
//#a#b#
//##.##
//#.c.#
//#####

//7 4
//#######
//#a...##
//#####.#
//#.b#..#
//###..d#
//#c.#..#
//#######
