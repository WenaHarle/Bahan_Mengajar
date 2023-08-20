from array import array
import os

komjar = array("i", [1, 9, 6, 3, 1])  # Memperbaiki tanda kurung dan angka 01

for i in range(len(komjar)):
    print(komjar[i])

print("Sebelum tipe (komjar[2])")
newType = str(komjar[2])
print("Sesudah tipe (newType) Komjar indeks ke-2 =", newType)

print(f"Tipe data awal (sebelum), setelah diubah (sesudah)")
os.system("PAUSE")

# MENGUBAH ISI DALAM ARRAY
for i in range(len(komjar)):
    komjar[i] = int(input("Input: "))

for i in range(len(komjar)):
    print(komjar[i])

os.system("PAUSE")

print("Mengubah isi array dengan fungsi append:")
for i in range(4):
    komjar.append(i)

for i in range(len(komjar)):
    print(komjar[i])
