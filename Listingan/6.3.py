import os

def nama_pengakses(prm_nama, prm_jurusan='Teknik Industri'):
    # Fungsi untuk Akses
    output = "\n\nPengakses " + prm_nama + "\nJurusan: " + prm_jurusan
    print(output)

def perhitungan_daya(prm_joule, prm_sekon):
    # Fungsi untuk Perhitungan Daya
    hasil = int(prm_joule) / int(prm_sekon)
    print("Hasil dari Perhitungan Daya: " + "%.2f" % hasil)

nama = input("\nMasukkan nama pengakses: ")  # Input
jurusan = 'Teknik Elektro'  # Input
nama_pengakses(nama, jurusan)  # Output
os.system('cls')

usaha = input("\nMasukkan Usaha (Joule): ")  # Input
waktu = input("Masukkan Waktu (Sekon): ")  # Input
perhitungan_daya(usaha, waktu)  # Output