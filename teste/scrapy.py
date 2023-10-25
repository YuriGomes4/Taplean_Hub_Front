import requests

# URL da página que você deseja obter o HTML
url = 'https://produto.mercadolivre.com.br/MLB-3414873335-bebedouro-bomba-eletrica-filtro-p-galo-de-agua-1020-lts-_JM'

# Faz uma solicitação GET à URL
response = requests.get(url)

# Verifica se a solicitação foi bem-sucedida (código de status 200)
if response.status_code == 200:
    # Obtém o conteúdo HTML da página como uma string
    html_content = response.text

    ind = 0
    seller_id = ""
    inicio = int(html_content.index('"seller_id":'))+12
    while True:
        if html_content[inicio+ind] == ",":
            break
        else:
            seller_id += html_content[inicio+ind]
            ind += 1

    print(seller_id)
    
else:
    print(f"A solicitação falhou com o código de status {response.status_code}")
