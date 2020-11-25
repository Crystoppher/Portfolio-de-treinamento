-- Gera��o de Modelo f�sico
-- Sql ANSI 2003 - brModelo.

/* Por: Crystoppher Sim�es Trindade */
/* Observa��o: Modelo l�gico convertido atrav�s do modelo use case para aplica��o do sistema E-commerce*/


CREATE TABLE Endere�o+Cliente/Usu�rio (
UF Texto(2),
Cidade Texto(30),
CEP N�mero(7),
N�mero N�mero,
Bairro Texto(20),
Logradouro Texto(30),
Complemento Texto(50),
C�digo N�mero,
Nome_Usu�rio Texto(15),
Nome Texto(30),
Telefone_Residencial Texto(11),
CPF N�mero(11),
Telefone_Celular Texto(11),
Senha Texto(10),
E-mail Texto(30),
Telefone_Comercial Texto(11),
PRIMARY KEY(C�digo,E-mail)
)

CREATE TABLE Foto (
C�digo N�mero(10) PRIMARY KEY,
Imagem Texto(1),
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero(10)
)

CREATE TABLE Fabricante (
Nome Texto(30),
C�digo N�mero(4) PRIMARY KEY
)

CREATE TABLE Produto (
Nome Texto(30),
Descri��o Texto(150),
C�digo N�mero(10) PRIMARY KEY,
Quantidade N�mero(4),
Pre�o N�mero(8,2),
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero(4),
Codigo N�mero(2),
FOREIGN KEY(C�digo) REFERENCES Fabricante (C�digo)
)

CREATE TABLE Categoria (
Nome Texto(30),
Codigo N�mero(2) PRIMARY KEY
)

CREATE TABLE Pedido+Nota_Fiscal (
C�digo N�mero PRIMARY KEY,
Valor_Frete N�mero(8,2),
Situa��o Texto(20),
Data_Validade Data,
Desconto N�mero(8,2),
Data_Pagamento Data,
Data_Hora Data/Hora,
Data_enetrega_prevista Data,
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero,
E-mail Texto(30),
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero,
-- Erro: nome do campo duplicado nesta tabela!
E-mail Texto(30),
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero(2),
N�mero N�mero,
Data_emissao Data,
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero,
FOREIGN KEY(/*erro: ??*/) REFERENCES Endere�o+Cliente/Usu�rio (C�digo,E-mail)
)

CREATE TABLE Forma_Pagamento (
C�digo N�mero(2) PRIMARY KEY,
Taxa_Juros N�mero(6,2),
Nome Texto(20)
)

CREATE TABLE Funcion�rio (
Usu�rio Texto(15),
C�digo N�mero PRIMARY KEY,
Senha Texto(10)
)

CREATE TABLE Produto_Pedido (
Preco_Venda N�mero(8,2),
Quantidade_Vendida N�mero(4),
C�digo N�mero(10),
-- Erro: nome do campo duplicado nesta tabela!
C�digo N�mero,
FOREIGN KEY(C�digo) REFERENCES Produto (C�digo),
FOREIGN KEY(C�digo) REFERENCES Pedido+Nota_Fiscal (C�digo)
)

ALTER TABLE Foto ADD FOREIGN KEY(C�digo) REFERENCES Produto (C�digo)
ALTER TABLE Produto ADD FOREIGN KEY(Codigo) REFERENCES Categoria (Codigo)
ALTER TABLE Pedido+Nota_Fiscal ADD FOREIGN KEY(C�digo) REFERENCES Forma_Pagamento (C�digo)
ALTER TABLE Pedido+Nota_Fiscal ADD FOREIGN KEY(C�digo) REFERENCES Funcion�rio (C�digo)
