// EXERCISE 2 – A Generic Finite-Size Stack

// A finite-size generic stack is an abstract data type that allows for the storing of data of a generic type following
// a last-in-first-out (LIFO) policy. That's to say elements are added to or removed from the top position of the stack
// in the same way that dishes are added to or removed from a pile. The basic operations for a stack are push (adds an
// element), pop (removes an element), top (accesses the top element), and isEmpty (checks whether the stack is empty).


#include <iostream>
#include <string>
#include <vector>


struct FullStackException: public std::exception {    // Creates a struct called FullStackException.
    const char* what() const throw() {
        return "This stack is full.";
    }
};


struct EmptyStackException: public std::exception {    // Creates a struct called EmptyStackException.
    const char* what() const throw() {
        return "This stack is empty.";
    }
};


template <typename T>
class StackI {    // Uses the StackI interface written in the practical.
    public:
        virtual void spingere(T t) = 0;
        virtual void pop() = 0;
        virtual T top() = 0;
        virtual bool isEmpty() = 0;
        virtual void print() = 0;
};


template <typename T>
class Stack: public StackI<T> {    // Creates a class called Stack that implements the StackI interface. It also has an attribute that keeps track of the number of elements in the stack as well as a vector which stores the elements.
    public:
        int num_elements;
        std::vector<T> stack;

        Stack(): stack(20), num_elements(0) {};    // Creates a stack with twenty elements.
        Stack(int n): stack(n), num_elements(0) {};    // Creates a stack with "n" elements.

        void spingere(T t) {
            if (num_elements == stack.capacity()) {    // Checks to see if the stack is full.
                throw FullStackException();
            }

            else {    // If the stack is not full, the element gets added to the top of the stack.
                stack.at(num_elements) = t;
                num_elements++;
            }
        }

        void pop() {
            if (num_elements == 0) {    // Checks to see if the stack is empty.
                throw EmptyStackException();
            }

            else {    // If the stack is not empty, the element on top of the stack gets removed.
                stack.pop_back();
                num_elements--;
            }
        }

        T top() {
            if (num_elements == 0) {    // Checks to see if the stack is empty.
                throw EmptyStackException();
            }

            return stack.at(num_elements - 1);    // If the stack is not empty, the element on top gets returned.
        }

        bool isEmpty() {    // Checks to see whether or not the stack is empty.
            if (num_elements == 0) {
                return true;
            }
            else {
                return false;
            }
        }

        void print() {    // Prints out all the elements currently in the stack.
            std::cout << '[';

            if (num_elements > 0) {

                for (int i = 0; i < num_elements; i++) {
                    std::cout << stack.at(i) << ' ';
                }
            }

            std::cout << ']' << std::endl;
        }
};


int main() {
    Stack<int> stackA;    // Creates a stack with twenty elements.
    Stack<int> stackB(40);    // Creates a stack with forty elements.

    stackB.print();

    try {    // Checks to make sure stackB is in fact empty.
        if (stackB.isEmpty() == true) {
            std::cout << "Stack B is in fact empty." << std::endl;
        }
    }
    catch (std::exception &excep) {
        std::cout << excep.what() << std::endl;
    }

    try {    // Tries to remove an element from an empty stack.
        stackB.pop();
    }
    catch (std::exception &excep) {
        std::cout << excep.what() << std::endl;
    }

    try {    // Tries pushing more than twenty elements.
        for (int i = 0; i < 19; i++) {
            stackA.spingere(1);
        }
        stackA.spingere(2);
        stackA.spingere(2);
    }
    catch (std::exception &excep) {
        std::cout << excep.what() << std::endl;
    }

    stackA.print();    // Verifies the "pop" method works as intended by printing stackA before and after popping an element from it.
    try {
        stackA.pop();
    }
    catch (std::exception &excep) {
        std::cout << excep.what() << std::endl;
    }
    stackA.print();

    try {    // Retrieves the top value from a non-empty stack.
        int top_element = stackA.top();
        std::cout << "The element on top of this stack is " << top_element << "." << std::endl;
    }
    catch (std::exception &excep) {
        std::cout << excep.what() << std::endl;
    }

    return 0;
}