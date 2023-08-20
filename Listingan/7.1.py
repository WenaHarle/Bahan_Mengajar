class Mahasiswa:
    def __init__(self, nama, asal):
        self.nama = nama
        self.asal = asal

    def praktikum(self):
        print("Mahasiswa sedang praktikum.")

    def perkenalan_vl(self):
        print(f"Saya {self.nama} berasal dari {self.asal}")

    def perkenalan_v2(self, nama, asal):
        print(f"Saya {nama} berasal dari {asal}")

    def perkenalan_v3(self, nama, asal):
        return f"Saya {nama} berasal dari {asal}"