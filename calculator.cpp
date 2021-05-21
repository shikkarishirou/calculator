#include <iostream>
#include <string>
//#include <cookiezi>

//WARNING: DOES NOT COMPILE; i mean you can kinda see what i was trying to do
//here but man raynei helpppppppp++++++++#####

/* i actually have zero idea on how to use variables from main 
and use them in the functions, nor do i have any idea how
to correctly use the parameters (how to infinite parameter?)
but fuck it i'm already so far in aaaaaaaaaa*/


//defines functions for calculation
long addition() {
	//sets the original starting point of summation to be 0
	long val = 0;
	//reads all the inputs, and adds each input together
	//not too sure about syntax i think i fucked up whatever
	//fuck how are you supposed to use the input thing from main
	//pointers? is that the answer to this? i cant
	//you know what imma just leave this here aaaaaaaaaaaaa
	
	/* reflection: wait hold on i could just bring the std::cin
	thing from main and just paste it here 

	but i'm too lazy so im not gonna do it */
	
	
	//nvm i'll do it anyways lol
	
	//let the user input the numbers they want to do operations on
	std::cout << "Please input your numbers. " << std::endl;
	long input;
	if  (std::cin >> input) //checks if there's more incoming values
		while (std::cin >> input)
			val = val + input;
	return val;		
}

long subtraction() {
	/*sets the original starting point of subtraction to be 0, initializes
	input variables*/
	long val = 0, n1 = 0, n2 = 0;
	std::cout << "Please input your 2 numbers." 
		<< std::endl;
	//reads input
	if (std::cin >> n1)
		while (std::cin >> n2)
	//subtracts n2 from n1
			val = n1 - n2;
	return val;
}

long multiplication() {
	long val = 1, num0, num1;
	std::cout << "Please input your numbers." << std::endl;
	if (std::cin >> num0)
		val = num0;
		while (std::cin >> num1)//gets the first two numbers from the user input
			val = num1 * val; /*sets val to be the product of the two numbers
			and keeps multiplying until there are no inputs left*/
		return val; //returns final product?
	
	else return 0;	// returns 0 if there's no input at all	
}

long division() {
	long val, n1, n2; 
	std::cout << "Please input your 2 numbers."
	if (std::cin >> n1)
		std::cin >> n2; //reads the 2 numbers
}		val = n1 / n2;
		return val;
	else return 0; // returns 0 if there's no input at all
	// wait i think i fucked up
	//idk probably did fuck fuck fuck
	//whatever

//error function

void fuckyou() {
	while (true)
		std::cout << "fuck you "
}






int main() {
	// let the user decide what operator they want to use
	std::string op;
	std::cout << "Please select your operator.\n"
		<< "Please use +, -, *, or / only. " << std::endl;
	std::cin >> op;
	//check for non-compatible operators (does this even work outside python?)
	//at least the "not" lights up lol
	if (op not == "+" or op not == "-" or op not == "*" or op not == "/")
		//is this even how you're supposed to use std::cerr?
		std::cerr << fuckyou()
	//run the appropriate function depending on the operator
	if (op == "+")
		addition();
	else if (op == "-")
		subtraction();
	else if (op == "*")
		multiplication();
	else
		division(); // i just realized that this shit breaks if they try 
					// to divide by zero but i give zero fucks at this point
	
	std::cout << "Your desired value is "<< val << std::endl;
	return 0; //i don't think this program works
	
	//fuck it won't compile aaaaaaaaaaaa
	//uploading to github anyways
}