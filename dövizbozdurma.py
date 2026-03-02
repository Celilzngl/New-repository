import requests
miktar = float(input("Ne kadar bozdurmak istiyorsun"))
url = "https://open.er-api.com/v6/latest/USD"
response = requests.get(url)
data = response.json()
usd_try = data["rates"]["TRY"]
sonuc = miktar * usd_try
print("1 USD",usd_try)
print(f"{miktar} USD {sonuc} TRY")
