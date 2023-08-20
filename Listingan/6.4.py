def nilai_maksimal1(deret_bilangan):
    print(f"Hasil Procedure: {max(deret_bilangan)}")

def nilai_maksimal2(deret_bilangan):
    nilai_terbesar = deret_bilangan[0]
    for nilai in deret_bilangan:
        if nilai > nilai_terbesar:
            nilai_terbesar = nilai
    return nilai_terbesar

def nilai_maksimal3(list):
    nilai_terbesar = list[0]
    if len(list) > 1:
        next_nilai_terbesar = nilai_maksimal3(list[1:])
        if next_nilai_terbesar > nilai_terbesar:
            nilai_terbesar = next_nilai_terbesar
    return nilai_terbesar

a = [3, 20, 191]

nilai_maksimal1(a)
print(f"Hasil Return nilai_maksimal2(a): {nilai_maksimal2(a)}")
print(f"Hasil Rekursif: {nilai_maksimal3(a)}")