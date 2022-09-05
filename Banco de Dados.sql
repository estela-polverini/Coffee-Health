create database Coffee_Health;
use Coffee_Health;

-- CRIANDO A TABELA DE CADASTRO
create table cadastro(
id int primary key auto_increment,
email varchar(60),
senha varchar(20),
nome varchar(100),
CPF char(11),
constraint chkemail check (email like '%@%')
);

-- CRIANDO TABELA PLANTAÇÃO
create table plantacao(
id int primary key auto_increment,
especie varchar(15),
estado char(2),
cidade varchar(30),
medida varchar(30),
tamanho int,
constraint chkmedida check (medida in('m²','ha'))
);

-- CRIANDO TABELA CONTROLE
create table controle(
id int primary key auto_increment,
temperatura double,
umidade float,
momento datetime default current_timestamp
);

-- INSERINDO DADOS
insert into cadastro (email, senha, nome, CPF) values
('diego.vieira@sptech.school','endiegoagronomo','Diego Vieira','15746824864'),
('lucas.bsilva@sptech.school','lucas123','Lucas Bonfim','3216547894'),
('estela.polverini@sptech.school','seeyoulater','Estela Polverini','85916863249'),
('victor.pereira@sptech.school','12345678','Victor Augusto','54123654125');

insert into plantacao (especie, estado, cidade, medida, tamanho) values
('Arábica','MG','Carmo de Minas','ha',2),
('Robusta','MT','Juína','m²',3),
('Eugenioides','SP','Joanópolis','m²',10),
('Arábica','MS','Eldorado','ha',1);

insert into controle (temperatura, umidade) values
(15.9,70.0),
(15.8,70.0),
(15.8,70.0),
(15.7,70.3),
(15.6,70.2),
(15.6,70.2),
(15.6,70.1);


