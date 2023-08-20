class Hero :
   def attackUp(self,nama, kekuatan):
     print(f"Hero {nama} memiliki kekuatan {kekuatan}.")

hero1 = Hero()
hero1.nama = "Ironman"
hero1.kekuatan = 90

hero1.attackUp(hero1.nama, hero1.kekuatan)
