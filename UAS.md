## Jawaban UAS

1. ~ Fungsi dalam Python
   Fungsi adalah blok kode yang dapat digunakan kembali dan melakukan tugas tertentu.
Fungsi membantu memecah masalah yang kompleks menjadi bagian-bagian yang lebih kecil dan mudah diatur.
Dalam Python, fungsi didefinisikan menggunakan kata kunci def diikuti dengan nama fungsi dan tanda kurung.

   ~ Fungsi Rekursif dalam Python
   Rekursi adalah teknik di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan suatu masalah.
Fungsi rekursif umumnya memiliki dua bagian utama:
- Kasus Dasar (Base Case): Kondisi di mana rekursi berakhir.
- Kasus Rekursif (Recursive Case): Bagian dari fungsi di mana ia memanggil dirinya sendiri.

 Codingan
def faktorial(n):
    // Kasus dasar
    if n == 1:
        return 1
    // Kasus rekursif
    else:
        return n * faktorial(n - 1)

// Uji fungsi
hasil = faktorial(5)

// Cetak hasil
print("Faktorial dari 5 adalah:", hasil)

Output nya:
Faktorial dari 5 adalah: 120

2. Exception Handling in Python
   Exception handling adalah mekanisme untuk menangani kesalahan runtime di dalam program.
   Kesalahan (exception) dapat terjadi karena berbagai alasan, seperti input yang tidak valid,
   pembagian dengan nol, atau file yang tidak ditemukan. Python menyediakan cara untuk menangani
   pengecualian menggunakan blok try, except, else, dan finally.
   • try: Blok ini digunakan untuk membungkus kode yang mungkin menghasilkan pengecualian.
   • except: Blok ini digunakan untuk menangani pengecualian jika terjadi dalam blok try.
   • else: Blok ini dieksekusi jika tidak ada pengecualian yang terjadi.
   • finally: Blok ini akan selalu dieksekusi, baik terjadi pengecualian atau tidak.

def bagi(a, b):
    try:
        hasil = a / b
    except ZeroDivisionError:
        return "Error: Pembagian dengan nol tidak diperbolehkan"
    else:
        return hasil
    finally:
        print("Eksekusi blok finally.")

// Uji fungsi dengan b = 0
hasil1 = bagi(10, 0)

// Uji fungsi dengan nilai b yang valid
hasil2 = bagi(10, 2)

print(hasil1)
print(hasil2)

Output:
Eksekusi blok finally.
Error: Pembagian dengan nol tidak diperbolehkan
Eksekusi blok finally.
5.0

3. GUI (Graphical User Interface) dalam Python
   GUI adalah antarmuka pengguna grafis yang memungkinkan pengguna berinteraksi
dengan program melalui elemen-elemen grafis seperti tombol, kotak teks, menu, dll.
GUI membuat aplikasi lebih user-friendly dibandingkan dengan antarmuka berbasis teks.

Python memiliki beberapa perpustakaan untuk membuat GUI, salah satu yang paling populer adalah Tkinter

codingan:

import tkinter as tk
from tkinter import messagebox

def show_message():
    messagebox.showinfo("Pesan", "Hello, world!")

// Membuat jendela utama
root = tk.Tk()
root.title("Contoh GUI")

// Membuat tombol
button = tk.Button(root, text="Klik Saya", command=show_message)
button.pack(pady=20)

// Menjalankan loop utama
root.mainloop()

Output:
sebuah jendela akan muncul dengan tombol
bertuliskan "Klik Saya". Ketika tombol ini ditekan, 
sebuah kotak pesan akan muncul dengan pesan "Hello, world!".

4. Komunikasi Aplikasi dengan Database dalam Python
   Untuk berkomunikasi dengan database MySQL menggunakan Python,
kita bisa menggunakan pustaka seperti mysql-connector-python.
Berikut adalah langkah-langkah dan contoh kode untuk membuat
koneksi ke database MySQL, membuat tabel, memasukkan data,
dan membaca data dari tabel tersebut.

Langkah-langkah:
1.) Menginstal pustaka: apt install mysql-connector-python.
2.) Mengimpor pustaka: mysql.connector.
3.) Membuat koneksi ke database.
4.) Membuat cursor untuk mengeksekusi perintah SQL.
5.) Mengeksekusi perintah SQL (membuat tabel, memasukkan data, membaca data, dll.).
6.) Menutup koneksi.

codingan:

import mysql.connector

// Membuat koneksi ke database
conn = mysql.connector.connect(
    host="localhost",    # Ganti dengan host database Anda
    user="root",         # Ganti dengan username database Anda
    password="password", # Ganti dengan password database Anda
    database="testdb"    # Ganti dengan nama database Anda
)

cursor = conn.cursor()

// Membuat tabel
cursor.execute('''CREATE TABLE IF NOT EXISTS users (
                  id INT AUTO_INCREMENT PRIMARY KEY,
                  name VARCHAR(255),
                  age INT)''')

// Memasukkan data
cursor.execute('''INSERT INTO users (name, age) VALUES (%s, %s)''', ('Alice', 30))
cursor.execute('''INSERT INTO users (name, age) VALUES (%s, %s)''', ('Bob', 25))

// Menyimpan perubahan
conn.commit()

// Membaca data
cursor.execute('''SELECT * FROM users''')
rows = cursor.fetchall()

// Menampilkan data
for row in rows:
    print(row)

// Menutup koneksi
conn.close()

output:
(1, 'Alice', 30)
(2, 'Bob', 25)
