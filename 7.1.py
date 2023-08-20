class ContohKelas:
    class_attribute = "Ini adalah atribut kelas"
    def __init__(self):
        pass

# Membuat objek dari kelas ContohKelas
objek1 = ContohKelas()

# Mengakses atribut kelas dan atribut instansi
print("Atribut Kelas:", ContohKelas.class_attribute)

# Menambahkan atribut saat objek diinisiasi
objek1.nama = "Wena Harilegawa"
objek1.umur = 25

# Menampilkan atribut yang telah ditambahkan
print("Nama:", objek1.nama)
print("Umur:", objek1.umur)
