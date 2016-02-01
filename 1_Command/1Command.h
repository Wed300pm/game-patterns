//Pattern1 classes declaration file (header file)


//class Command is the base class that represents a triggerable game command.
class Command
{
//Data member declarations:
	//none so far

//Member function declarations:
public:
	//Constructors:
	Command(); //Default constructor (no return type, no parameters)
	//Other member functions:
	virtual void execute() = 0;
};


//Subclasses for each of the different game actions:
class JumpCommand : public Command
{
	//Data member declarations:
	//none so far

//Member function declarations:
	public: 
		//Constructor:
		JumpCommand();
		//Other member functions:
		void execute();
};



class FireCommand : public Command
{
	//Data member declarations:
	//Data member declarations:
	//none so far

//Member function declarations:
	public: 
		//Constructor:
		FireCommand();
		//Other member functions:
		 void execute();
};

//class InputHandler::handleInput()
//{
//	if (isPressed(BUTTON_X)) buttonX_->execute();
//}


