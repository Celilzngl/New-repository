def metin_analiz(metin):
    harf_sayisi = 0
    ozel_karakter = 0
    for karakter in metin:
        if karakter.isalpha():
            harf_sayisi += 1
        elif not karakter.isspace() and not karakter.isdigit():
            ozel_karakter+= 1
    
    kelime_sayisi = len(metin.split())

    return harf_sayisi,ozel_karakter,kelime_sayisi
metin = input("Metin girin:")
harf,ozel_karakter,kelime_sayisi = metin_analiz(metin)
print("Harf sayısı:",harf)
print("Özel karakter:",ozel_karakter)
print("Kelime sayısı:",kelime_sayisi)