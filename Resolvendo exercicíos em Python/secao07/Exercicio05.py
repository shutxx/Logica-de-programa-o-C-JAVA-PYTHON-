nome = input("Informe o nome: ")
senha = input("Informe a senha: ")

while nome == senha:
    print("ERRO!! Nome de usuário devem ser diferentes!")
    nome = input("Informe o nome: ")
    senha = input("Informe a senha: ")
print("CONCLUIDO!")