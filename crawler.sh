#!/bin/bash
echo -e 'AUTHENTICATE ""\r\nsignal NEWNYM\r\nQUIT' | nc 126.0.0.1 9051
address=$1
if torify wget --spider --connect-timeout=30 --tries=2 $address 2>/dev/null; then
	echo $address >>active.txt
else
	echo $address >>inactive.txt
fi	

