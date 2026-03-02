import requests
url = "https://open.er-api.com/v6/latest/USD"
response = requests.get(url)
data = response.json()
usd_try = data["rates"]["TRY"]
print("1 USD",usd_try,"TRY")
