#!/bin/bash
while true; do 
	address=$(./generatortest)
	./crawler.sh $address
done
