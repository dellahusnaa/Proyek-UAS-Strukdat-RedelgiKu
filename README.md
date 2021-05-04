# RedelgiKu

Anggota Kelompok:
* ANGGIE FORESTRY (140810200008)
* DELLA FAUZIYYAH HUSNA (140810200012)
* ANANDA SHAQUILLE FARELL (140810200028)
---
## Latar Belakang
Ditengah maraknya kasus penyebaran COVID- (*Coronavirus Disease* 2019) yang terjadi, membawa dampak bagi bidang pendidikan di Indonesia. Karena penyebaran virus corona begitu cepat, untuk sementara waktu, setiap sekolah dan perguruan tinggi dengan sangat terpaksa tidak melakukan kegiatan belajar mengajar di dalam kelas atau tatap muka. Sebagai gantinya, Menteri Pendidikan dan Kebudayaan Republik Indonesia, Nadiem Makarim, menyarankan dan mewajibkan setiap sekolah dan institut yang ada di Tanah Air untuk melakukan pembelajaran ini secara *online* atau dalam jaringan (daring). 
Pembelajaran daring merupakan proses belajar mengajar yang dilaksanakan secara *online* atau tidak bertatap muka langsung antar pendidik dan peserta didik. Dalam keadaan pandemi seperti ini, Bimbel Redelgi memerlukan suatu sistem data secara digital untuk mempermudah *Customer Service* dalam mengatur data yang dimiliki. Oleh karena itu, kami menghadirkan aplikasi yang bernama **RedelgiKu** yang dibuat sebagai solusi permasalahan tersebut.


## Tujuan dan Manfaat
Tujuan kami membuat aplikasi Redelgi yaitu menyediakan layanan pengaturan data secara digital untuk Bimbel Redelgi. Kami berharap aplikasi **RedelgiKu** dapat memberikan manfaat, khususnya untuk pihak Redelgi. Manfaat yang kami maksud yaitu mempermudah Bimbel Redelgi dalam mengatur data secara digital.


## Penjelasan Aplikasi
Aplikasi RedelgiKu merupakan aplikasi yang dibuat dengan tujuan untuk mempermudah Bimbel Redelgi dalam mengatur data bimbel yang dimilikinya. Data yang kami maksud antara lain:
- Data Pegawai
- Data Peserta Didik
- Data Jadwal Belajar

Struktur Data yang digunakan dalam proyek RedelgiKu adalah *Stack*, *Priority Queue*, dan *Linked List*. Beberapa fitur aplikasi yang telah kami rencanakan antara lain:
- menampilkan data yang diperlukan -> menggunakan *stack*
- mencari data yang diperlukan -> menggunakan *linked list*
Fitur *search*/cari akan di implementasikan dengan *transversal queue* berdasarkan kriteria dari *query* yang diinputkan.
- menambah data -> menggunakan *linked list*
- menghapus data -> menggunakan *linked list*
- mengedit data -> menggunakan *linked list*
- mengundo data 
Ketika CS memilih *undo* tumpukan paling atas *stack* akan diambil dan nilainya akan dimasukan ke note *queue* yang diubah sebelum secara terbalik
- antrian jadwal kelas tambahan (apabila ada siswa yang meminta kelas tambahan, maka guru yang luang pasti akan didahulukan)
Dalam mengatur jadwal akan diimplementasikan menggunakan *priority queue*. Pengambilan jadwal siswa ditetapkan berdasarkan frekuensi guru mengajar. 

## Gambar Rancangan Antar Muka
<!--
Buat rancangan antar muka selengkap mungkin sesuai fungsi aplikasinya. rancangan antar muka
diusahakan serapih dan seindah mungkin. tools yang digunakan dalam pembuatan rancangan gambar
dibebaskan sesuai kreatifitas kalian
!-->
![image](https://user-images.githubusercontent.com/79789750/116955287-4d8f5400-acbc-11eb-9ec1-4097a6756a92.png)

![image](https://user-images.githubusercontent.com/79789750/116956447-7f55ea00-acbf-11eb-9041-54a000aa0d0e.png)

![image](https://user-images.githubusercontent.com/79789750/116956456-854bcb00-acbf-11eb-9615-c455fb4b30e3.png)

*Stack* dan *priority queue* di implementasikan dengan cara *Linked list*. Maksudnya data disimpan tidak diurutkan berdasarkan penempatan fisik, melainkan setiap elemen menunjuk ke elemen selanjutnya (implementasi pointer). Penyimpanan data ini dapat diubah secara dinamis





## Rencana Pengerjaan Projek
Dalam mengerjakan proyek ini, kami membagi timeline pengerjaan proyek ini menjadi beberapa bagian, antara lain:
- Tahap I (30 April 2021 - 3 Mei 2021)	: Perancangan konsep aplikasi 
- Tahap II (4 Mei 2021 - 11 Mei 2021)	: Pembuatan source code
- Tahap III (12 Mei - 17 Mei 2021 )	: Testing dan perbaikan
- Tahap IV (Maksimal 17 Mei 2021)	: Penetapan final product

Tools yang kami gunakan dalam pengerjaan aplikasi/proyek ini yaitu :
- Github, 
- Google Docs, 
- Visual Studio Code, dan 
- CMD. 

Kami menggunakan media WhatsApp dan Discord untuk berdiskusi. Pembagian kerja pada kelompok kami diutamakan dengan cara pembagian tugas per fungsi. 



## Lisensi

MIT License 2021
