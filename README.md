# 📚 Project Akhir Algoritma & Pemrograman - Semester 1

Kumpulan project aplikasi console menggunakan bahasa pemrograman C++ sebagai tugas akhir praktikum Algoritma & Pemrograman Semester 1.

## 📋 Daftar Project

### 1. 🎓 Manajemen Nilai Siswa
**File:** `ManajemenNilaiSiswa.cpp`

Aplikasi untuk mengelola data nilai siswa dengan fitur lengkap untuk input, tampil, edit, dan hapus data nilai.

**Fitur:**
- Input data siswa dan nilai
- Menampilkan daftar nilai siswa
- Mengedit data nilai
- Menghapus data siswa
- Perhitungan rata-rata nilai
- Konversi nilai ke grade (A/B/C/D/E)

---

### 2. 🛒 Program Kasir Sembako
**File:** `ProgramKasirSembako.cpp`

Sistem kasir untuk toko sembako yang dapat menghitung total belanja, diskon, dan memberikan struk pembayaran.

**Fitur:**
- Input data barang dan harga
- Perhitungan subtotal per item
- Perhitungan total belanja
- Sistem diskon otomatis
- Cetak struk pembelian
- Perhitungan kembalian

---

### 3. 📊 Konversi Nilai ke Grade
**File:** `konversiNilaiGrade.cpp`

Program untuk mengkonversi nilai angka menjadi nilai huruf (grade) berdasarkan standar penilaian akademik.

**Fitur:**
- Input nilai angka (0-100)
- Konversi otomatis ke grade (A/B/C/D/E)
- Validasi input nilai
- Keterangan status kelulusan
- Konversi batch untuk multiple siswa

---

### 4. 🍽️ Menu Restoran
**File:** `menuRestoran.cpp`

Aplikasi pemesanan menu restoran dengan sistem perhitungan harga dan struk pesanan.

**Fitur:**
- Tampilan daftar menu dengan harga
- Input pesanan multiple item
- Perhitungan total harga
- Cetak struk pesanan
- Interface menu yang user-friendly

---

### 5. 🌡️ Perhitungan Suhu
**File:** `perhitunganSuhu.cpp`

Program untuk menghitung statistik suhu selama 7 hari dengan analisis data suhu harian.

**Fitur:**
- Input data suhu harian (7 hari)
- Perhitungan rata-rata suhu
- Menentukan suhu tertinggi
- Menentukan suhu terendah
- Tampilan laporan suhu mingguan
- Validasi input suhu

---

## 🛠️ Tech Stack

- **Bahasa Pemrograman:** C++
- **Compiler:** g++ / MinGW / Visual Studio / Code::Blocks
- **Konsep yang Digunakan:**
  - Sequential Programming
  - Conditional Statements (if-else, switch-case)
  - Looping (for, while, do-while)
  - Functions
  - Arrays
  - Input/Output Operations
  - Data Validation

## 🚀 Cara Menjalankan

### Prerequisites
Pastikan Anda sudah menginstall:
- Compiler C++ (g++, MinGW, Visual Studio, atau Code::Blocks)
- Terminal/Command Prompt

### Compile & Run

**Menggunakan g++ (Linux/Mac/Windows dengan MinGW):**

```bash
# Compile
g++ ManajemenNilaiSiswa.cpp -o ManajemenNilaiSiswa

# Run
./ManajemenNilaiSiswa        # Linux/Mac
ManajemenNilaiSiswa.exe      # Windows
```

**Menggunakan Code::Blocks:**
1. Buka file `.cpp` di Code::Blocks
2. Klik `Build and Run` (F9)

**Menggunakan Visual Studio:**
1. Create new C++ Console Project
2. Copy-paste code ke dalam project
3. Press `Ctrl + F5` untuk run

### Compile Semua Project Sekaligus

```bash
# Compile semua file
g++ ManajemenNilaiSiswa.cpp -o ManajemenNilaiSiswa
g++ ProgramKasirSembako.cpp -o ProgramKasirSembako
g++ konversiNilaiGrade.cpp -o konversiNilaiGrade
g++ menuRestoran.cpp -o menuRestoran
g++ perhitunganSuhu.cpp -o perhitunganSuhu
```

## 📂 Struktur Project

```
projectAkhir-alpro-sem1/
├── ManajemenNilaiSiswa.cpp      # Project 1: Manajemen Nilai
├── ProgramKasirSembako.cpp      # Project 2: Kasir Sembako
├── konversiNilaiGrade.cpp       # Project 3: Konversi Grade
├── menuRestoran.cpp             # Project 4: Menu Restoran
├── perhitunganSuhu.cpp          # Project 5: Konversi Suhu
├── programFungsi2.cpp           # Helper functions
└── README.md                    # Dokumentasi
```

## 💡 Cara Penggunaan

Setiap program memiliki menu interaktif. Secara umum:

1. Jalankan program yang diinginkan
2. Baca menu yang tersedia di layar
3. Masukkan pilihan menu (biasanya berupa angka)
4. Ikuti instruksi input data
5. Program akan menampilkan hasil/output
6. Pilih menu lain atau keluar dari program

### Contoh Flow Program:

```
=================================
    SISTEM KASIR SEMBAKO
=================================
1. Input Barang
2. Lihat Keranjang
3. Hitung Total
4. Cetak Struk
5. Keluar
=================================
Pilih menu [1-5]: _
```

## 🎯 Tujuan Pembelajaran

Project ini dibuat untuk memahami dan mengimplementasikan:

- ✅ **Algoritma Dasar** - Sequential, branching, dan looping
- ✅ **Input/Output** - Membaca dan menampilkan data
- ✅ **Conditional Logic** - Pengambilan keputusan dalam program
- ✅ **Functions** - Modularisasi code untuk reusability
- ✅ **Arrays** - Penyimpanan dan manipulasi data multiple
- ✅ **Data Validation** - Memastikan input user valid
- ✅ **Problem Solving** - Menyelesaikan masalah nyata dengan programming

## 📖 Konsep yang Dipelajari

### Fundamental Programming
- Variable declaration & initialization
- Data types (int, float, char, string)
- Operators (arithmetic, comparison, logical)
- Type casting

### Control Structures
- If-else statements
- Switch-case statements
- Nested conditionals

### Loops
- For loop
- While loop
- Do-while loop
- Nested loops

### Functions
- Function declaration
- Parameters & arguments
- Return values
- Void functions

### Arrays
- 1D Arrays
- Array manipulation
- Searching & sorting

## 🔧 Troubleshooting

### Program tidak bisa di-compile
- Pastikan compiler sudah terinstall dengan benar
- Check syntax error di code
- Pastikan semua library ter-include

### Program langsung close setelah run
- Tambahkan `system("pause")` atau `cin.get()` sebelum program selesai

### Input tidak terbaca
- Gunakan `cin.ignore()` setelah input angka sebelum input string
- Clear buffer dengan `fflush(stdin)` atau `cin.clear()`

## 👨‍💻 Author

**Farell Dio Revianzha**
- **Program Studi:** Informatika
- **Universitas:** Universitas Pembangunan Nasional "Veteran" Yogyakarta
- **Semester:** 1 (Tahun Ajaran 2025/2026)
- **Portfolio:** [frevz.dev](https://farellspace.vercel.app/)
- **GitHub:** [@frevszz](https://github.com/frevszz)

## 📄 License

Project ini dibuat untuk keperluan akademik dan pembelajaran. Silakan digunakan sebagai referensi dengan mencantumkan sumber.

## 🙏 Acknowledgments

Terima kasih kepada:
- Dosen Algoritma & Pemrograman
- Asisten praktikum
- Teman-teman yang sudah membantu dan berdiskusi

---
