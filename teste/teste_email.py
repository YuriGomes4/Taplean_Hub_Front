import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

# Configurações do servidor SMTP e informações da conta de email
smtp_server = "smtp.gmail.com"  # Substitua pelo servidor SMTP do seu provedor de email
smtp_port = 587  # Porta para comunicação com o servidor SMTP (587 para TLS)
smtp_user = "taplean011@gmail.com"  # Seu endereço de email
smtp_password = "ujtl oyxa hkno yhfp"  # Sua senha de email

# Destinatário
recipient_email = "yurialdegomes@gmail.com"  # Endereço de email do destinatário

# Assunto e corpo do email
subject = "Recuperação de senha"
message = "Olá,\n\nClique no link a seguir para recuperar sua senha: https://suaaplicacao.com/recuperar_senha\n\nAtenciosamente,\nSua Aplicação"

# Criar uma mensagem de email
msg = MIMEMultipart()
msg["From"] = smtp_user
msg["To"] = recipient_email
msg["Subject"] = subject
msg.attach(MIMEText(message, "plain"))

# Conectar-se ao servidor SMTP e enviar o email
try:
    server = smtplib.SMTP(smtp_server, smtp_port)
    server.starttls()
    server.login(smtp_user, smtp_password)
    server.sendmail(smtp_user, recipient_email, msg.as_string())
    server.sendmail(smtp_user, recipient_email, msg.as_string())
    server.quit()
    print("Email enviado com sucesso!")
except Exception as e:
    print("Erro ao enviar o email:", str(e))
