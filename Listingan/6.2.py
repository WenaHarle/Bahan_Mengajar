a = int(input('2 akan dikuadratkan sebanyak: '))
x = 0

print('Hasil menggunakan while:\n')

while x < a:
    b = 2 ** x
    print(b)
    x += 1

print('\nHasil menggunakan for:\n')

for i in range(1, a + 1):
    b = 2 ** i
    print(b)