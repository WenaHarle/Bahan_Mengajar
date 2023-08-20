print('\n 1. Mars \n 2. Pluto \n 3. Merkurius \n 4. Venus \n 5. Saturnus ')

nilai = int(input('KAMU MAU KE PLANET MANA? : '))

if nilai == 1:
    print('Kita harus menempuh perjalanan ke Mars sejauh 225 juta kilometer dari Bumi')
elif nilai == 2:
    print('Kita harus menempuh perjalanan ke Pluto sejauh 5.9 miliar kilometer dari Bumi')
elif nilai == 3:
    print('Kita harus menempuh perjalanan ke Merkurius sejauh 77 juta kilometer dari Bumi')
elif nilai == 4:
    print('Kita harus menempuh perjalanan ke Venus sejauh 61 juta kilometer dari Bumi')
elif nilai == 5:
    print('Kita harus menempuh perjalanan ke Saturnus sejauh 1.2 miliar kilometer dari Bumi')
else:
    print('Maaf tujuan anda tidak diketahui kode planetnya')