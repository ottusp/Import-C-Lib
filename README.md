# Import-C-Lib
A simple program that enables your linux system to import your own C libs to the current directory  

[How to install](#how-to-install)  
[How to use](#how-to-use)  
[How it works](#how-it-works)  


# How to install
1. Clone this file to any directory in your Linux.  
2. Run `make all`  
3. You can now delete the files you just clone (optional)  
4. All set!  

# How to use
1. In your home directory, you must have a folder called ".mylibs/C_C++/"  
2. Inside this folder, you must put any lib you wish to use locally (either downloaded or developed)  
3. This lib you want to use must be inside a folder named as the lib itself  
   - For example, suppose you have a linked list lib, which contains these 2 files:  
   ```
     linkedList.c  
     linkedList.h  
   ```
   - These 2 files must be inside another folder called "linkedList";  
   - This "linkedList" folder will be put inside ".mylibs/C_C++", so the path for theses files will look like this:  
   ```
    ~/.mylibs/C_C++/linkedList/linkedList.c  
    ~/.mylibs/C_C++/linkedList/linkedList.h  
   ```
4. Inside any directory in your system, just run the command <code>_add_lib_c <em>lib_name</em> </code>  
4.1. Using the example above, you should type `_add_lib_c linkedList`. Both linkedList.c and linkedList.h will be added to the current directory

# How it works
The code is itself very simple.  
It just takes the parameters passed to main as argv[1] and copy the following paths into the current directory.  
<code> ~/.mylibs/C_C++/<em>argv[1]</em>/<em>argv[1]</em>.c</code>  
<code> ~/.mylibs/C_C++/<em>argv[1]</em>/<em>argv[1]</em>.h</code>  

Then it uses the stdlib.h function "system" to execute the shell command  
<code>cp -t . ~/.mylibs/C_C++/<em>argv[1]</em>/<em>argv[1]</em>.c ~/.mylibs/C_C++/<em>argv[1]</em>/<em>argv[1]</em>.h</code>  
Where <em>argv[1]</em> is the lib name you passed as parameter when executing _add_lib_c

# Disclaimer
This is one of the first times I am putting real projects in github, and I am trying to document it properly. So any complain, suggestion, commit or coment is
totally welcome!
