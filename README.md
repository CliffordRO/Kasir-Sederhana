🧾 Program Kasir Sederhana (Bahasa C)

Program Kasir Sederhana ini dibuat menggunakan bahasa pemrograman C untuk mensimulasikan sistem kasir berbasis console.
Program ini mendukung input barang, perhitungan total belanja, diskon, sorting harga, pencarian barang, dan history pembelian.

Project ini dibuat sebagai tugas kelompok sekaligus portfolio GitHub.

👥 Anggota Kelompok

Rafael Alonso Tenggana – 2902587822

Clifford Ritch Oliver – 2902578010

Fablius Vincent Tan

✨ Fitur Program

Input data barang (nama, harga, jumlah)

Perhitungan total harga per barang

Menampilkan history pembelian

Sorting barang berdasarkan harga (ascending)

Pencarian barang berdasarkan nama

Perhitungan total belanja

Sistem diskon otomatis:

Diskon 10% untuk total ≥ Rp1.000.000

Diskon 5% untuk total ≥ Rp500.000

Menampilkan struk pembayaran

🛠️ Teknologi

Bahasa Pemrograman: C

Library:

stdio.h

string.h

Compiler:

GCC

Dev-C++

Code::Blocks

📂 Struktur Project
📁 Kasir-Sederhana
│── Kasir_Sederhana.c
│── README.md

▶️ Cara Menjalankan Program
1. Clone Repository
git clone https://github.com/username/kasir-sederhana.git

2. Masuk ke Folder Project
cd kasir-sederhana

3. Compile Program
gcc Kasir_Sederhana.c -o kasir

4. Jalankan Program
./kasir

📸 Contoh Output
Masukkan jumlah barang : 2

Barang ke-1
Nama Barang : Buku
Harga Barang : 50000
Jumlah : 2

Barang ke-2
Nama Barang : Pulpen
Harga Barang : 5000
Jumlah : 5

=== HISTORY PEMBELIAN ===
1. Pulpen | 5000.00 x 5 = 25000.00
2. Buku   | 50000.00 x 2 = 100000.00

Cari nama barang : Buku
Ditemukan: Buku | Harga 50000.00 | Jumlah 2

=== STRUK PEMBAYARAN ===
Total belanja : 125000.00
Diskon        : 0.00
Total bayar   : 125000.00

🎯 Tujuan Project

Melatih penggunaan struct dalam bahasa C

Mengimplementasikan fungsi (function)

Menerapkan sorting dan searching

Simulasi sistem kasir sederhana

Sebagai portfolio GitHub

📌 Catatan

Program dijalankan melalui terminal / console

Maksimal data barang: 100 barang
