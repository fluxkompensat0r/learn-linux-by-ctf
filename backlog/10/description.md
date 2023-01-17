# pipes

In Linux, the *pipe* command lets you send the output of one command to another. 

Piping, as the term suggests, can redirect the standard output, input, or error of one process to another for further processing.

The syntax for the *pipe* or unnamed *pipe* command is the | character between any two commands:

Command-1 | Command-2 | …| Command-N

A *named pipe* can last until as long as the system is up and running or until it is deleted. 
It is a special file that follows the _FIFO_ (first in, first out) mechanism. 
It can be used just like a normal file; i.e., you can write to it, read from it, and open or close it. To create a *named pipe*, the command is:

- mkfifo <pipe-name>

This creates a *named pipe* file that can be used even over multiple shell sessions.

Another way to create a FIFO *named pipe* is to use this command:

- mknod p <pipe-name>

To *redirect* a _standard output_ of any command to another process, use the > symbol. To *redirect* a _standard input_ of any command, use the < symbol.

# Your goal
To get the flag of this challenge you need to pipe the directory size sum of the *home folder* of this challenge to the binary that is executeable in your challenge directory.

# Useful commands
- ls
- df
- du
