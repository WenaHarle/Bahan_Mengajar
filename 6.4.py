#deklarasi fungsi 
def fungsi_param_wajib (param1,param2):  #Parameter formal
    keluaran = f"Data dari parameter 1 : {param1} \nData dari parameter 2 : {param2}" 
    return print(keluaran) 

#pemanggilan fungsi 
''' 
Pemanggilan fungsi dengan parameter wajib, passing argumen harus diisi. 
''' 

fungsi_param_wajib('Komjar',63) #Parameter Aktual
