#!/bin/bash
echo -e 'AUTHENTICATE ""\r\nsignal NEWNYM\r\nQUIT' | nc 126.0.0.1 9051
onion=".onion"
http="http://"
output=$http$(./generator)$onion
if torify wget --spider --connect-timeout=30 --tries=2 $output 2>/dev/null; then
	echo $output >>active.txt
else
	echo $output >>inactive.txt
fi	

