#!/bin/bash

#Author:Francisco Wesley Melo Silva
#This script aims to require a web page from a web server.
#It makes a HTTP request, wait for 10 minutes, and do it again.
#This software is avaible under GNU/GPLv2.


i=5000 #contador de requisições máximas
cont=1 #requisicai atual
sair=false #interromper as requisicoes

while [[ $i -ne 0 ]]; do
	read -t3 -p "Deseja interromper? Pressione qualquer numero...  " sair; 
		if [[ $sair -eq false ]]; 
		then
		echo "             "
		echo "Fazendo requisição de página ao servidor web..." 
		echo "Requisicao $cont em" 
		date +%'T' 
		curl 192.168.0.8  #faz a requisição da página ao servidor
			echo "Próxima requisição sera as"
		date +%'T' --date='600 seconds'  
	   		sleep 600s #tempo de espera entre uma requisição e outra igual a 10 minutos
	    		let i-- #O contador é decrementado
	    		let cont++ #atualiza o contador da requisicao atual
		echo "********************************************************************";
		else 
			exit		
		fi
done;
