#!/bin/bash
# This Script, envScript.sh was implemented using vi by Spencer Stair for C lab 01 as the "'D' Option"
#“D” Option (best grade is 60):”
#Create the script shown below named envScript.sh using vi to print basic information on the system you use for development.  Execute the script and submit a copy of the script and results.  
#The script may be listed on the command widow using the command “cat envScript.sh” with the following results after creating the file.
# The first line, called 'shebang - #!,' indicates use the bash shell to evaluate the script.
# !/bin/perl would have requested use of Perl to evaluate the script.
#Usually lines beginning with a pound sign are comments.
echo "Welcome to COSC2347 C executing on host $HOSTNAME running $OSTYPE."
echo "Your user id is $USER in home directory $HOME."
echo "Your system is executing version $BASH_VERSION."
echo "Your current path is $PATH, present working directory $PWD."
echo "Your previous working directory was $OLDPWD."
echo "The process ID of the interpreter (or script) $PPID "
#  "with $# arguments accessible as $0, $1, $2, ... "

sleep 2
echo "After a 2 second nap, you have been running $SECONDS seconds."
exit
