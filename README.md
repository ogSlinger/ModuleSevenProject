# ModuleSevenProject
# Project for SNHU CS-210

1) Summarize the project and what problem it was solving.

  The project was to create a program that would read in a file that listed a sale of a particular item with redundancies. The tasks the program performed were:
      1. Create a backup of the file with the frequency of each item in the list.
      2. Be able to find and return the frequency of an item based on user input.
      3. Print the entire list of items and their frequency of sale.
      4. Print a formatted frequency chart utilizing a special character to indicate each sale. In this case, a '#'.
      
2) What did you do particularly well?

  I feel I did particularly well with the structure of the program. The only thing that main.cpp contains is just calling the constructor of the "StoreMenu" class, which then instantiated the FileManager object as well.
  Another thing would be the inclusion of <map> and going outside what was required of me to learn a new concept to implement in the code. I learned quite a bit from it and understand the importance of maps especially on larger scale data.

  
3) Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

   I would add "the big three" to both class objects for best practices. For all intents and purposes of the exercise, I knew the product was not going to be further expanded upon. So, to reduce the amount of code, I chose to leave out a
default destructor, copy constructor, and assignment operator of the FileManager class, and only implemented a destructor for the StoreMenu class, as I allocated the FileManager on the heap.


4) Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

  I would say the toughest part was learning about the <map> library, but I utilized the optional text for our reading materials to get a good primer for it. I also deepened my understanding of it practicing "leetcode.com" questions online
in various exercises.


5) What skills from this project will be particularly transferable to other projects or course work?

  I would say the whole class in of itself is going to be useful to my potential career. I would like to do systems programming/engineering for VR/AR systems. I know C++ is one of the better suited languages for this job. In terms of
other coursework, I hope to use it down the line for my data structures and algorithms course. A project I plan on starting is exploring the <openvr> library from SteamVR and begin exploring the things I can do with it's abstractions. However,
I wish to dig into the library's source to deepen my understanding of VR/AR tech before my time is up with school and I acquire my bachelor's.


6) How did you make this program maintainable, readable, and adaptable?

  I organized each of the class's functions into a heirarchy that can be read in a progressive pattern. After the constructors/deconstructors, I defined the class's functions in order that would happen for the user. This gives a better
understanding to what the program does. Also, the naming conventions I gave to the functions should give the best context as to their functionality to the program. They are also boiled down to a simple process, and can be expanded upon
easily if need be. The main function, as stated before, only needs to call the StoreMenu constructor for the program to run, allowing the code to be quite portable. Developers could adapt this into a grocery system, given the requirement
of creating a "CS210_Project_Three_Input_File", although naming convention could easily be changed to suit a programmer's needs.
