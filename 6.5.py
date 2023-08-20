#deklarasi fungsi 
def fungsi_param_optional (param1, param2 = 63): 
  keluaran = f"Data dari parameter 1 : {param1} \nData dari parameter 2 : {param2}\n" 
  return print(keluaran) 

#pemanggilan fungsi 
''' 
Pemanggilan fungsi dengan parameter optional, passing argumen yang 
parameternya sudah diberi nilai default bersifat opsional. 
''' 

fungsi_param_optional('Komjar') 
fungsi_param_optional('Komjar','vs everybody') 