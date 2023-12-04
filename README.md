# Team-3-Project

 #### Project repo for Team 3's 2023-2024 COP-1000 course

## Set up

 To run the program, first install an IDE. We reccomend [Visual Studio Code](https://code.visualstudio.com/download).

 Then, navigate to extentions in the left sidebar, and install the Microsoft C/C++ extention.

 Next, set up the GCC compiler following [this](https://www.linkedin.com/pulse/installing-gcc-compiler-windows-run-c-program-gitbash-david-michael) guide.

 Finally, run the program in VSCode using the GCC builder. Outputs will be in the terminal.

## Known Issues:

* rarely, a suffix will not be added to the response output. This is likely because ```srand``` takes in a 32 bit value, and ```time.h``` returns a 64 bit value, occasionally causing problems.
