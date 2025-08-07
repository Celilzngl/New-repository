def cevapla(girdi):
    girdi =girdi.lower()
    if "merhaba" in girdi or "selam" or girdi:
        return "Merhaba size nasıl yardımcı olabilirim"
    elif "nasılsın" in girdi:
        return "ben bir botum ama iyi sayılırım sen nasılsın"
    elif "hava" in girdi:
        return "Hava durumu için bir Apı bağlaman gerek :)"
    elif "saat" in girdi:
        from datetime import datetime
        return f"şuan saat: {datetime.now().strftime('%H:%M')}"
    elif "görüşürüz" in girdi or "çık" in girdi:
        return "Görüşmek üzere hoşçakal"
    else:
        return "Pardon sizi tam anlayamadım daha açık yazar mısınız"
def basla():
    print("Merhaba sohbet etmek için bir şeyler yazın çıkmak için 'çık' yazın\n")

    while True:
        kullanici_girdisi = input("Sen")
        yanıt = cevapla(kullanici_girdisi)
        print("bot:",yanıt)

        if "çık" in kullanici_girdisi.lower():
            break

basla()





