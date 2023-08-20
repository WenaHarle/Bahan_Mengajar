import os

print("Memasukkan data mahasiswa")

nama = input('Nama Mahasiswa: ')
NIM = int(input('NIM Mahasiswa: '))
IP = float(input('Nilai IP: '))
IPK = float(input('Nilai IPK: '))

print("Nama Mahasiswa Teknik Elektro = {}".format(nama))
print("NIM Mahasiswa = {}".format(NIM))
print("IP Mahasiswa = {}".format(IP))
print("IPK Mahasiswa = {}".format(IPK))

os.system("PAUSE")

print("Rata-rata nilai mahasiswa")

nilail = float(input('Nilai 1: '))
nilai2 = float(input('Nilai 2: '))
nilai3 = float(input('Nilai 3: '))
rata = (nilail + nilai2 + nilai3) / 3

print("Rata Mahasiswa = {}".format(rata))
