nascimento(vitorb,data(28,09,1999)).
nascimento(yuri,data(14,03,2000)).
nascimento(leornardoderiva,data(27,05,1996)).
nascimento(lucascaina,data(07,01,1995)).
nascimento(vrodrigues,data(19,02,2000)).
nascimento(moacyr,data(25,03,2000)).
nascimento(schutz,data(07,07,1997)).
nascimento(daniel,data(06,03,1995)).
nascimento(camila,data(12,09,2000)).
nascimento(rodrigo,data(21,08,1997)).
nascimento(hevelyn,data(14,03,1999)).

sexo(gustavo,masc).
sexo(vitorb,masc).
sexo(yuri,masc).
sexo(leonardoderiva,masc).
sexo(lucascaina,masc).
sexo(vrodrigues,masc).
sexo(moacyr,masc).
sexo(schutz,masc).
sexo(daniel,masc).
sexo(camila,femi).
sexo(rodrigo,masc).
sexo(hevelyn,femi).

sigino(N,sargitario):-nascimento(N,data(D,M,_)),(D>=22,M=:=11);(21>=D,M=:=12).
signo(N,aquario):-nascimento(N,data(D,M,_)),(D>=20,M=:=01);(D=<18,M=:=02).
signo(N,peixes):-nascimento(N,data(D,M,_)),(D>=19,M=:=02);(D=<20,M=:=03).
signo(N,aries):-nascimento(N,data(D,M,_)),(D>=21,M=:=03);(D=<19,M=:=04).
signo(N,toruo):-nascimento(N,data(D,M,_)),(D>=20,M=:=04);(D=<20,M=:=05).
signo(N,gemeos):-nascimento(N,data(D,M,_)),(D>=21,M=:=05);(D=<22,M=:=06).
signo(N,cancer):-nascimento(N,data(D,M,_)),(D>=21,M=:=06);(D=<22,M=:=07).
signo(N,leao):-nascimento(N,data(D,M,_)),(D>=23,M=:=07);(D=<22,M=:=08).
signo(N,virgem):-nascimento(N,data(D,M,_)),(D>=23,M=:=08);(D=<22,M=:=09).
signo(N,libra):-nascimento(N,data(D,M,_)),(D>=23,M=:=09);(D=<22,M=:=10).
signo(N,escorpiao):-nascimento(N,data(D,M,_)),(D>=23,M=:=10);(D=<21,M=:=11).

