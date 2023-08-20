# Meminta pengguna memasukkan angka
angka = float(input("Masukkan sebuah angka: "))

# Penyeleksi kondisi
if angka > 0:
    print("Angka", angka, "adalah angka positif")
elif angka < 0:
    print("Angka", angka, "adalah angka negatif")
else:
    print("Angka", angka, "adalah nol")
