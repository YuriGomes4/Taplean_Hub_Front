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
        
