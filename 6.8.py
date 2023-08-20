def procedure(): 
   x=int(input("Masukan menggunakan \"procedur\" : ")) 
   print(f'Kuadrat dari masukan adalah {(x*x)}') 

def f_return(num): 
   return num*num 

def f_rekursif(n) : 
    if (n==1): 
        return 1 
    else : 
        return n* f_rekursif(n-1) 

procedure() 
y=int(input("Masukan menggunakan \"return\" : ")) 
print(f"Kuadrat dari masukan adalah : {f_return(y)}") 

z=int(input("Masukan menggunakan \"rekursi\" : ")) 
print(f"Faktorial dari masukan adalah : {f_rekursif(z)}") 
