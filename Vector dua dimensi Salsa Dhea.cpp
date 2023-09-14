/* Program demonstrasi penggunaan larik dua dimensi */

#include <stdio.h>
#include <vector>
#define JUMLAH_KOTA 4
using namespace std;

int main(){
	vector <vector<int> > jarak;
	int i, j;
	int asal, tujuan;
	
	for(i = 0; i < JUMLAH_KOTA; i++){
			vector<int> vtr;
		for(j = 0; j < JUMLAH_KOTA; j++){
			int x;
			scanf("%d,&x");
			vtr.push_back(x);
		}
		jarak.push_back(vtr);
		vtr.clear();
	}
	
	scanf("%d %d", &asal, &tujuan);
	printf("Jarak Kota-%d KOta -%d = ", asal, tujuan);
	printf("%d km\n", jarak[asal][tujuan]);
}
