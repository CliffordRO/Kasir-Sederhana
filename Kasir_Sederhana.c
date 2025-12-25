#include <stdio.h>
#include <string.h>

//Nama Kelompok
//Rafael Alonso Tenggana 2902587822
//Clifford Ritch Oliver 2902578010
//Fablius Vincent Tan 

struct Barang{
	char nama[50];
	float harga;
	int jumlah;
	float total;
};

void inputBarang(struct Barang b[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Barang ke-%d\n", i+1);
		printf("Nama Barang : ");
		scanf("%s", b[i].nama);
		printf("Harga Barang : ");
		scanf("%f", &b[i].harga);
		printf("Jumlah : ");
		scanf("%d", &b[i].jumlah);
		b[i].total = b[i].harga * b[i].jumlah;
		printf("\n");
	}
}

float hitungTotal(struct Barang b[], int n){
	int i;
	float total=0;
	for(i=0;i<n;i++){
		total += b[i].total;
	}
	return total;
}

void sortingHarga(struct Barang b[], int n){
	int i,j;
	struct Barang temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(b[j].harga > b[j+1].harga){
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
}

void searchBarang(struct Barang b[], int n){
	char cari[50];
	int i, found=0;
	printf("Cari nama barang : ");
	scanf("%s", cari);
	for(i=0;i<n;i++){
		if(strcmp(b[i].nama, cari) == 0){
			printf("Ditemukan: %s | Harga %.2f | Jumlah %d\n",
			       b[i].nama, b[i].harga, b[i].jumlah);
			found=1;
		}
	}
	if(!found){
		printf("Barang tidak ditemukan\n");
	}
}

void historyPembelian(struct Barang b[], int n){
	int i;
	printf("\n=== HISTORY PEMBELIAN ===\n");
	for(i=0;i<n;i++){
		printf("%d. %s | %.2f x %d = %.2f\n",
		       i+1, b[i].nama, b[i].harga, b[i].jumlah, b[i].total);
	}
}

int main(){
	int jumlahBarang;
	float totalHarga, diskon=0, bayar;
	struct Barang barang[100];

	printf("Masukkan jumlah barang : ");
	scanf("%d", &jumlahBarang);

	inputBarang(barang, jumlahBarang);

	sortingHarga(barang, jumlahBarang);

	historyPembelian(barang, jumlahBarang);

	searchBarang(barang, jumlahBarang);

	totalHarga = hitungTotal(barang, jumlahBarang);

	if(totalHarga >= 1000000){
		diskon = totalHarga * 0.10;
	}else if(totalHarga >= 500000){
		diskon = totalHarga * 0.05;
	}

	bayar = totalHarga - diskon;

	printf("\n=== STRUK PEMBAYARAN ===\n");
	printf("Total belanja : %.2f\n", totalHarga);
	printf("Diskon        : %.2f\n", diskon);
	printf("Total bayar   : %.2f\n", bayar);
	printf("\nTerima kasih telah berbelanja!\n");

	return 0;
}

