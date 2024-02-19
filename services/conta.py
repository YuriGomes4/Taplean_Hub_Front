from . import servidor

class get(servidor.auth):
    
    def assinaturas(self):
        """
        Descrição da função
        """

        url = self.base_url+f"/api/v1/assinatura"

        response = self.request("GET", url=url)

        if response:

            return response.json()['result']
        
        else:
            return []
        
    def pagamentos_conta(self, conta=None):
        """
        Descrição da função
        """

        url = self.base_url+f"/api/v1/conta/pagamentos"

        if conta:

            params = {
                'conta': conta
            }

            response = self.request("GET", url=url, params=params)

        else:

            response = self.request("GET", url=url)

        if response:

            return response.json()['result']
        
        else:
            return []
        
