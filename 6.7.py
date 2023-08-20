#deklarasi fungsi 
def fungsi_param_tak_urut (param1, param2): 
     keluaran = f"Data dari parameter 1 : {param1} \nData dari parameter   2 : {param2}\n" 
     return print(keluaran) 

#pemanggilan fungsi 
''' 
Pemanggilan fungsi dengan argumen yang tidak berurut, passing argumen 
dapat mendefinisikan nama parameter yang dipanggil.
'''

fungsi_param_tak_urut(param2 = 'Komjar', param1 = 'Elektro') 
