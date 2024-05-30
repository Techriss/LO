create table todo (
    ID int not null auto_increment primary key,
    title varchar(30) not null,
    details varchar(1000),
    done boolean not null default 0
);