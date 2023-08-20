k = 11
o = 16
m = 14
j = 5
a = 3
r = [3, 7, 5, 8, 9]

print("k", k, " o ", 0, " m =", m, " j=", j, " a ", a, " I=", r)

print("\noperator Aritmatika")
x = k * a + o / j - a
print('k*a+o/j-a = ', x)

x = 0 / j
print('o/j ,x')

print("\noperator Perbandingan")
X = m == j
print('m==j :', X)

x = k > a
print('k>a: ', x)

x = 0 != o
print('o!= ', x)

print("\nOperator Penugasan")
x = j ** a
print('ja:', x)

m %= 4
print('m %= 4:', m)

print('\noperator Logika')
x = (a > j) and (m < k)
print('(a > j) and (m < k) =', x)
x = not (o < m)
print('not (o < m):', x)

print('\nOperator Keanggotaan')
x = a in r
print('a in r:', x)

x = a not in r
print('a not in r:', x)

print("\nOperator Identitas")
x = j is r
print('j is r:', x)

x = m is not r
print('m is not r:', x)

print("\nOperator Bitwise")
x = j & o
print('j & o =', x)

x = a << 1
print('a << 1 =', x)
