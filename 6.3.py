for i in range(1, 6):  # Perulangan untuk baris
    for j in range(1, 6):  # Perulangan untuk kolom
        result = i * j
        if result % 2 == 0:
            print(f"{result:2}*", end=" ")
        else:
            print(f"{result:2}", end=" ")
    print() 