# Tugas Pemrograman Dasar TLS 2026
### Oleh: Nala Adicandra (26/576781/TK/65602)

## Problem 1 "The Last Astronaut"
Dalam sebuah misi luar angkasa, terdapat sejumlah astronot yang harus mengikuti sebuah proses seleksi untuk menentukan siapa yang akan menjadi astronot terakhir yang bertahan. Para astronot berdiri membentuk sebuah lingkaran dan masing-masing memiliki nomor unik mulai dari 1 hingga N. Komandan memiliki sebuah sistem eliminasi dengan sebuah nilai K. Sistem tersebut bekerja secara berulang hingga hanya tersisa satu astronot. Pada awal proses, perhitungan dimulai dari astronot nomor 1. Astronot yang mendapatkan hitungan ke-K akan dielminasi dari lingkaran. Setelah seorang astronot dieliminasi, proses perhitungan berikutnya dimulai dari astronot yang berada tepat setelah posisi astronot tersebut.

[**Pseudocode**](problem1-pseudocode.txt)

## Problem 2 "Alien-In-The-Middle"
Dari sejumlah astronot yang ada pada misi tersebut, seorang astronot menyadari bahwa terdapat alien yang sedang berpura-pura menjadi salah satu dari mereka. Untuk mengatasi masalah ini, mereka membuat cara komunikasi baru yang hanya dapat dipahami oleh manusia asli. Cara komunikasi baru ini menggunakan sebuah sistem sandi rahasia.

Dalam sistem ini, setiap huruf akan diubah menjadi huruf lain berdasarkan posisi atau nomor dari huruf sebelumnya. Huruf pertama tidak mengalami perubahan, sedangkan setiap huruf berikutnya akan digeser sebanyak nilai dari huruf yang berada tepat sebelumnya. Untuk menentukan nilai setiap huruf, gunakan posisi huruf dalam alfabet, dengan A = 1, B = 2, C = 3, …, Z = 26. Jika hasil pergeseran melewati Z, perhitungan kembali dimulai dari A.

[**Flowchart**](problem2-flowchart.png)
