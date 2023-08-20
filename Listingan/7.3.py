class Mahasiswa:

    jurusan = "Teknik Elektro"

    def __init__(self, nama, matkul, nilai):
        self.nama = nama
        self.matkul = matkul
        self.nilai = nilai

    def is_lulus(self):
        if self.nilai < 55:
            print(f'Mahasiswa {self.nama} atas {self.matkul}')
            print(f'{Mahasiswa.jurusan} lulus ({self.nama})')
        else:
            print(f'Mahasiswa atas nama {self.nama}')
            print(f'{Mahasiswa.jurusan} lulus pada mata kuliah {self.matkul}')

# Contoh penggunaan
mhs = Mahasiswa("Michael", "DAP", 100)
mhs.is_lulus()