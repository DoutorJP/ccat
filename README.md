
# Table of Contents

1.  [Introduction](#orgc83ef91)
    1.  [Main source code:](#org6282bef)
2.  [Instalation](#org7273ec0)
3.  [Usage](#orgc5827f4)
4.  [Thanks](#orgba9f19c)

GNU cat is bloated. so i wrote my own cat in 15 lines.


<a id="orgc83ef91"></a>

# Introduction

CCAT is a UNIX cat like utility, but it is less bloated. 


<a id="org6282bef"></a>

## Main source code:

    #include <stdio.h>
    #include <stdlib.h>
    
    int main(int argc, char *argv[])
    {
      char ch;
      FILE * fp = fopen(argv[1], "r");
      do {
    	ch = fgetc(fp);
    	printf("%c", ch);
      }
      while(ch != EOF);
      fclose(fp);
      return 0;
    }

As you can see, it is very minimalistic.


<a id="org7273ec0"></a>

# Instalation

CCAT is very easy to install. if you want a local instalation, run `$ make`. But, if you want a system-wide installation, then you will need to run `# make install`, and after that, you would like to clean the local binaries: `$ make clean`.


<a id="orgc5827f4"></a>

# Usage

`ccat <file>`

or, if you are on a local installation:

`./ccat <file>`


<a id="orgba9f19c"></a>

# Thanks

Thank you for installing ccat! i would appreciate if you contributed to my program. All the source code is [here](https://github.com/DoutorJP/ccat).

