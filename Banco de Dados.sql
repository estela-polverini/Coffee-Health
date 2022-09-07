create database Coffee_Health;
use Coffee_Health;

-- CRIANDO A TABELA DE CADASTRO
create table Cadastro(
idCadastro int primary key auto_increment,
email varchar(60),
senha varchar(20),
nome varchar(100),
constraint chkemail check (email like '%@%')
);

-- CRIANDO TABELA PLANTAÇÃO
create table Plantacao(
idPlantacao int primary key auto_increment,
especie varchar(15),
estado char(2),
cidade varchar(30),
medida varchar(30),
tamanho int,
constraint chkmedida check (medida in('m²','ha')),
constraint chkestado check (estado in ('AC','AL','AP','AM','BA','CE','ES','GO','MA','MT','MS','MG','PA','PB','PR','PE','PI','RJ','RN','RS','RO','RR','SC','SP','SE','TO'))
);

-- CRIANDO TABELA CONTROLE
create table Controle(
idControle int primary key auto_increment,
temperatura double,
umidade float,
momento datetime default current_timestamp
);

-- INSERINDO DADOS
insert into Cadastro (email, senha, nome) values
('diego.vieira@sptech.school','endiegoagronomo','Diego Vieira'),
('lucas.bsilva@sptech.school','lucas123','Lucas Bonfim'),
('estela.polverini@sptech.school','seeyoulater','Estela Polverini'),
('victor.pereira@sptech.school','eovitao','Victor Augusto');

insert into Plantacao (especie, estado, cidade, medida, tamanho) values
('Arábica','MG','Carmo de Minas','ha',2),
('Robusta','MT','Juína','m²',3),
('Eugenioides','SP','Joanópolis','m²',10),
('Arábica','MS','Eldorado','ha',1);

insert into Controle (temperatura, umidade) values
(15.9,50.0),
(15.8,50.0),
(15.8,50.0),
(15.7,50.3),
(15.6,50.2),
(15.6,50.2),
(15.6,50.1);


