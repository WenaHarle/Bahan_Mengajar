class Mahasiswa:
    jurusan = "Teknik Elektro"  # Perlu diapit oleh tanda kutip ganda atau tunggal

    def __init__(self, nama, matkul, nilai):
        self.nama = nama
        self.matkul = matkul
        self.nilai = nilai

    def is_lulus(self):
        if self.nilai < 55:
            print(
                f"Mahasiswa jurusan {Mahasiswa.jurusan} atas nama {self.nama} tidak lulus pada mata kuliah {self.matkul}")
        else:
            print(f"Mahasiswa jurusan {Mahasiswa.jurusan} atas nama {self.nama} lulus pada mata kuliah {self.matkul}")
