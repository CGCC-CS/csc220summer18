#! /usr/bin/python

import time

outfile = open("/home/csc240/220/class13/outfile.txt", 'a')

outstr = time.strftime("%H:%M:%S") + "\n"
time.sleep(5)
outfile.write(outstr)
