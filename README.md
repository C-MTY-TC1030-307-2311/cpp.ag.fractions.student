# Exercise - The class Fraction

## Problem's description

Write the class Fraction that must have:
* Integer attributes for the numerator and denominator
* Default constructor to initialize the fraction with the value 0/1
* Constructor with parameters to initialize the function with the values received
* Getters for each one of the attributes
* Setters for each one of the attributes
* The method print to display the fraction in the usual way (numerator/denominator)
* The method sum that receives as parameter an object of type Fraction and has as return value another object of type Fraction that contains the sum of the current object with the object received as parameter.
It is necessary that this method returns the fraction simplified (for instance if the sum is 8/10, the method must return 4/5).

Now, write an application that tests the class Fraction


## Objective

- Ensure that the code passes all tests successfully
   * Only modify the allowed files to achieve this objective (specific rules are provided below).

- The GitHub Actions should display a green checkmark when all tests have passed, and a red cross when one or more tests have failed.
   * **Recommendation:** You can click on the red cross to check which test(s) have failed (or if the code has not compiled correctly)
   * **Recommendation:** If the Autograding doesn't display tests or doesn't work, please contact your teacher through an issue.

## Instructions

- You should modify the files (.cpp and .hpp) that you consider appropiate.

Explanation of the other files:

- The file `test/tests.cpp` contains the tests for this activity (DO NOT MODIFY IT!)
- The file `test/catch.hpp` contains the CATCH2 testing library (DO NOT MODIFY IT!)
- The file `makefile` contains the commands to execute the activity (DO NOT MODIFY IT!)
- The file `./build/appTests` will be generated after compiling (for **local testing**, just run it)

## Commands for local testing, execution, and debugging

- Command to build and run tests: `make` o `make test`
    * If the test is already built, just type : `./build/appTests`

- Command to build y run the program: `make run` 
    * If the program is already built, just type : `./build/exercise`

- Comando to debug with command line: `make debug`
    * To learn about debugging commands, refer to
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/

- Command to debug the test execution with `vsCode` or `GitPod`: `make debugvs` 
    * Use the IDE's debugger.

- Command to debug the program execution with `vsCode` o en `GitPod`: `make debugtest` 
    * Use the IDE's debugger.

## Notes

- The code will be evaluated only if it compiles.
   * The reason for this is that if it doesn't compile, it's not possible to generate the executable and perform the tests.

- Some test cases may receive individual grades, while others may receive a grade only if they pass all together (or all tests collectively).

- The final grade will be automatically assigned with each commit and will be evaluated only up until the deadline of the activity.

For any additional questions, please consult your teacher.

## License

MIT License 2020
