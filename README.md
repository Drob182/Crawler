# Crawler

Current version: V1

This is my super rudimentary darkweb crawler for linux. It pings 
randomly generated 16 character onion addresses and then
saves the address to a text file. If the ping is successful
the address is added to active.txt otherwise it is added to
inactive .text. 

Setup:
Simply run "sudo ./CrawlerInstaller" and the script will make 
sure you have the necessary packages installed (tor, torsocks, 
wget) and compiles the generatorV1.c

Operation:
Run "./StartCrawling" to start running the crawler in the background
and run "./StopCrawling" to stop the crawler. (It will finish 
crawling the most recently generated address before fully ending 
the process)
