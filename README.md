# cmake_learning
A repository that should familiarize with the very basic concepts of cmake and how
cpp can be structured. It is a project with the only purpose to learn to use cmake
properly. Some friends asked for the files and it has therefore some features of a tutorial.

# git clone
Coming soon...

# tutorial
In all files depending on this project, there are explanations if they seem necessary.

1)
It is common for larger projects to strictly seperate source code from the compiled binary
files. This is part of the reason for the existence of cmake. In this project, all binaries
including the executable (and libraries) will be stored in the build directory.
The build directory
is platform dependent and therefore not part of the git-repository. Therefore, we need to 
create ("make") this directory.

    $ mkdir build

2)
Before compiling any code, we want to understand the directory 
structure. Familiarize yourself with
the structure (At that point, you can ignore the directory "inp")

Hint: The cpp-code is stored in the directory "src". Inside "src" there are three projects. 

Which files contain main-methods?
Which project requires the file "printer.cpp" to be compiled?

3)
The project is perfectly set up, so cmake works.
How do we execute cmake? In which directory? 

4)
Now we are going to understand what cmake does and how each of the CMakeLists.txt effect the 
executable behind easy. Each file should have enough explanation to understand the procedure. 
a)Look at the top layer CMakeLists and find out the projects name.
        -> cmake_learing/CMakeLists.txt
b)In the first part, we focus on the src-code (and neglect "inp"). Look and the directory 
  structure again and remember what you found out in a), what do you expect in the CMakeLists.txt
  in cmake_learing/src/CMakeLists.txt? -> go look at it!
c)We are getting closer to the source code, finally!
  Let's move to cmake_learning/src/easy/
  Open the file easy.cpp. The file contains a main-method. 
  Why can this code not be compiled on its own?

  HINT: You can compile single files easily to check what happens with

    $ g++ -o easy easy.cpp
  Make sure you delete traces of your messy compilation if they exist. Remember you are currently
  in the source code! You don't want any compiled binaries here!

  Now, we look at CMakeLists.txt to see how is dealt with this missing "printer.h".
  There are two possible ways to include the missing source files. Do you see any advantages of
  one method over the other? 

d)In one of the two methods, a CMakeLists.txt in cmake_learning/src/classes/ is necessary.
  In this file, you can see how a library is created using cmake. 
  Expert Question: There are two (which we have seen already) to build the library.
    Which? And what is the difference?



