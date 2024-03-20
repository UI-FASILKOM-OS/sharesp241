### I've added "compile.sh" to simplify things

# REV03: Wed 13 Mar 2024 12:00
# REV02: Sun 12 Mar 2023 18:00
# REV01: Sat 11 Mar 2023 23:00
# START: Sat 11 Mar 2023 22:00
         1         2         3         4         5         6         7
1234567890123456789012345678901234567890123456789012345678901234567890

WEEK05: Autoconf and Automake

* Remember to update the ATTENDANCE inside the shared GitHub repo.

* You are supposed to PUSH the shared GitHub repo at least six 
  times during the class meeting with an interval of at least every 
  15 minutes.

* Create and work inside folder "W05/" on the shared GitHub repo.

* Write a program "share.c":
  * Function "dummy()" is inside the program "share.c". 
  * Function "dummy()" will print your GitHub account name (GITHUB_ACCOUNT).

* Write two programs, "prog1.c" and "prog2.c".
  * Both programs use the function "dummy()" of "share.c".
  * Write the file header "share.h" that includes all those programs. 

* Inside the file "share.h":
  * Declaration of the function "dummy()".
  * Define "GITHUB_ACCOUNT" with your GitHub Account Name. 

* Use "autoconf" to generate the configure file.

* Use "automake" to generate the Makefile file.
  * The C standard should be "-std=gnu18".

* Files:
  * configure.ac
  * Makefile.am
  * prog1.c
  * prog2.c
  * share.c
  * share.h

