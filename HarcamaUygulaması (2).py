import json
import os
from datetime import datetime
# Veri dosyasının adı
DATA_FİLE = expenses.json
# Harcama verilerini yükleyen fonksiyon
def load_expenses():
    if not os.path.exists(DATA_FİLE):
        return []
    with open('DATA_FİLE','r' ) as f:
        return json.load(f)
# Harcama verilerini kaydeden fonksiyon
def save_expenses(expenses):
    with open('DATA_FİLE','w') as f:
        json.dump(expenses,f,indent = 4)
# Yeni harcama ekleyen fonksiyon
def add_expense():
    try:
        amount = float(input("Tutar:"))
    except ValueError:
        print("Hatalı Giriş! lütfen sayısal bir değer girin:")
        return
    category = input("Kategori:örnek(yemek,ulaşım,eğlence)")
    description = input("Açıklama(opsiyonel)")
    date = input("Tarih: GG/AA/YY boş bırakılırsa bugün")
    if not date:
        date = datetime.now().strftime('%d/%m/%Y')
    expense = { 
        "amount": amount,
        "category" : category,
        "description": description,
        "date": date
    }
    expenses = load_expenses()
    expenses.append(expense)
    save_expenses()
    print("✅ Harcama kaydedildi!\n")
def list_expenses():
    expenses = load_expenses()
    if not expenses:
        print("Henüz hiç harcama kaydı yok")
        return
    
        print("\n---- Harcama Listesi------ ")

        for i,exp in enumerate(expenses,start = 1):
            print(f"{i} , {exp['date']},{exp['category']},{exp['amount']}t,{exp['description']}")
        print()
def menu():
    while True:
        print("Kişisel harcama takip uygulaması")
        print("1.harcama ekle")
        print("2 harcamaları listele")
        print("3.çıkış")
        choice = input("Seçiminiz:")
        if choice == "1":
            add_expense()
        if choice == "2":
            list_expenses()
        if choice == "3":
            print("Görüşmek üzere")
            break
        else:
            print("Geçersiz seçim,lütfen 1,2 veya 3 girin")

if __name__ == "__main__":
    menu()



     