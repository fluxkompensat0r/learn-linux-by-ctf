# socket

*Sockets* are used by unix to *communicate* across programs and also across TCP/IP networks.

Unix operating systems can make use of high performance unix sockets which are represented as *files*.

Sockets can also be bound to TCP/IP : PORT combinations and therefore connect over layer 4 enabled networks.
 
It's very important to be able to investigate open *sockets* on a host to find out what the machine is about.

Also it is a way to find unwanted open ports that could be accessed publically or by other layer 4 capable devices.

# Your goal
The flag for this challenge is hidden in a unix socket - you need to talk to the socket to be able to receive the next flag!
Don't forget to checkout the man pages if you can't find a way of using the needed tools.

# Useful commands
- netstat
- ss
- netcat
- telnet
