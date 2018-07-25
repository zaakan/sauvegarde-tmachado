ldapsearch -xLLL uid=z* uid cn | grep cn | cut -c 5- | sort -rf
