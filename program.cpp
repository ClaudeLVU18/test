
// C++ Course Notes

#include <iostream> //allows for variables to be loaded
#include <string> // allows string to be used
#include <stdlib.h>
#include <cmath>


using namespace std; // every variable is seeking a namespace to be executed in, this saves the time 
                    // by designating the following codes to be in "std" (Standard).


// Void allows for functions to be made; basically a container for a set of commmands. "{}" is what contains the code of the function.
// Anything written within the curly brackets are included within the funciton.
void printTest () {
    // Printing
    cout << "Hello " << "World" << endl; 
    // cout is a command that prints out what is followed by it using <<
    // << is basically a connector for whatever variables, functions, or text must be printed for cout
    // endl = End Line, moves on to the next text line below.
    // "()" are referred to as parameters.

} 

void stringfunction()
{
    string text = "Hey Delilah";
    cout<<text.length()<<" = (string).length function\n\n";
    cout<<text[2]<<" = index position function. (first letter starts with 0)\n\n";
    //text[4] = 'G';
    cout<<text<< " = replace index position character function\n"<<endl;
    cout << text.find("Hey, 0");

}

void workingwithnumbers()
{
    double wholeNUm =5;
    double decNum = 5.5;

    cout << "Increment test. Base number is 5."<<endl;
    cout << "a. Plus one\nb. Minus one\nC.Plus num of choice\nD.Minus num of choice\nE.Multiply num of choice\nF. Divide num of choice\n";
    cout << "Select one: ";
    char input;
    cin >> input;
    cout<<"\n";

    switch(input)
    {
        case 'a':
        case 'A':
            wholeNUm++;
            cout<<wholeNUm;
            break;
        case 'b':
        case 'B':
            wholeNUm--;
            cout<<wholeNUm;
            break;
        case 'c':
        case 'C':
            int numplus;
            cin >> numplus;
            wholeNUm += numplus;
            cout<<wholeNUm;
            break;
        case 'd':
        case 'D':
            int numsub;
            cin >>numsub;
            wholeNUm -= numsub;
            cout<<wholeNUm;
            break;
        case 'e':
        case 'E':
            double nummult;
            cin >> nummult;
            wholeNUm *= nummult;
            cout<<wholeNUm;
            break;
        case 'f':
        case 'F':
            double numdiv;
            cin>>numdiv;
            wholeNUm /=numdiv;
            cout<<wholeNUm;
            break;
        default:
            cout<<"try again";
            break;
            
    }
}

void mathfunctions()
{
    cout << pow(3,2)<<endl;//raise to the power off
    cout <<sqrt(36)<<endl;//find square root
    cout <<round(5.8)<<endl; //round off numbers
    cout<<ceil(3.2)<<endl; //round off to the highest number
    cout<<floor(4.9)<<endl; //round off to the lowest number
    double one = 1905;
    double two = 1080;
    cout<<fmax(one, two)<<endl;

}



void variableTest ()
{
    // Variables
    string name1 = "Mark"; 
    int age(25);
    double chance = 50.25;
    char grade = 'A';

  
    cout << name1 << age << chance << grade << endl;
    


    
    cout << name1 + " is " << age << " years old." << " he has a " << chance << " of getting an " << grade << " grade." << "    --- V A R.  T E S T"; 
}

void parametersTest(string day, int temp) // parameters are blank variables set to functions so that they may be assigned in main function.
{
    cout << "The day today is " << day << ". It is " << temp << " degrees outside." << "     --- P A R A M.  T E S T";
      // refer to main function, variables are called.
}

void variableStub() // Instead of immediately declaring a variable, a stub can be created which would declare the variable's value later on.
{
    string userName;
    userName = "John";

    int cashAmount;
    cashAmount = 50;

    cout << userName << " has " << cashAmount << " dollars." << "     --- V A R.  S T U B  T E S T";
}

void parameterStub(string userName, int cashAmount); // allows a parameter function to be declared later on after the main function.
// (Refer to follow void parameterStub function after the main function.)
// must have " ; " when not including curly brackets.


void boolTest() //Boolean is the term for denoting true and false. Boolean codes can be created to run codes based off true/false setting.
{
    bool isMale = true;
    if(isMale) 
    {
        cout << "Congratualtions, you are a Man." << "     --- B O O L  T E S T";
    }
    // The code written within this if statement shall be run if variable called is set to true. 
    // If false, variable "isMale" will therefore be deactivated. Hence, the code won't run.
}

void consoleInput()
{
    cout << "Enter your age: ";
    int age;
    cin >> age;

    cout << "\nYour age is: " << age << "\n " << endl;

    cout << "\nEnter your name: ";
    string name;
    cin >> name;
    cout << "\nHello " << name << "!" << endl;
}

void operatorsTest()
{
    cout << "Choose 2 numbers to be subtracted from one another: " << endl;
    int v1;
    int v2;
    cout << "\nInput first value: ";
    cin >> v1;
    cout << "\nInput second value: ";
    cin >> v2;
    int difference = v1 - v2;
    cout << "\nThe difference is: " << difference;
}

void concatenation()
{
    string a = "Hello";
    string b = " ";
    string c = "World!";
    cout << a + b + c << endl;
}

void exercise1()
{
     
        int firstNumber = 1;
        bool iCanCode = true;
        char hopefulGrade = 'a';
        double myDecimal = 1.0;
        string minimalSentence = "y";
        int keyMash = 13213123;
        float mysteryDataType = 5.6f;

        if(iCanCode)
        {
            cout << firstNumber << " " << iCanCode << " " << hopefulGrade << " " << myDecimal << " " << minimalSentence << " " << keyMash << " " << mysteryDataType;
        }

        cin.get();
        

}

void divide()
{
    int nOne = 50;  
    int nTwo = 7;
    cout << nOne/nTwo << endl;
}

void partOne(string myName, string homeTown, int age)
{
    cout << "\n\nPRINTING NAME, HOMETOWN, AND AGE.\n\n";

    cout << "\n\nHi I am " << myName << "\n\nI am from my hometown of " << homeTown << " which is located in the Philippines." << "\n\nAs of July 18th, I am now " << age << ".\n"; 
    cin.get();
}

void partTwo()
{
    cout << "\n\nINPUT NAME, HOMETOWN, AND AGE.\n\n";
    cout << "\n\nHi, what is your name? ";
    string myName;
    cin >> myName;

    cout << "\n\nOh, where are you from? ";
    string homeTown;
    cin >> homeTown;

    cout << "\n\nNice, how old are you now? ";
    int age;
    cin >> age;
    
    system("CLS");
    cout << "\n\nHi " << myName << "\n\nI see you are from " << homeTown << "." << "\n\nAnd that you are now " << age;
    cin.get();
}


void partThree()
{
    int fahrenheit = 32;
    int celsius = (fahrenheit - 32)*5/9;
    cout << celsius << "degrees";

}

void partFour()
{
    cout << "\n\nCONVERTING FAHRENHEIT TO CELSIUS.\n\n";
    cout << "Hi, you can convert Fahrenheit to Celsius degrees here\n\n" << "Type in temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32)*0.5556;
     
    cout << "\n\nThat would be " << celsius << " degrees celsius.\n\n";
    cin.get();

}

void partFive()
{
    cout << "\n\nCONVERTING CELSIUS TO FAHRENHEIT.\n\n";
    cout << "Hi, you can convert Celsius to Fahrenheit degrees here\n\n" << "Type in temperature in Fahrenheit: ";
    double celsius;
    cin >> celsius;
    double fahrenheit = celsius*1.8 + 32;
     
    cout << "\n\nThat would be " << fahrenheit << " degrees fahrenheit.\n\n";
    cin.get();

}

void partSix()
{
    system("Color 2");
    cout << "\n\nF I N D I N G  A R E A  A N D  C I R C U M F E R E N C E  U S I N G  R A D I U S.\n\n";
    
    cout << "Enter radius of circle: \n";
    double rad;
    cin >> rad;
    double radsq = rad*rad;
    double pi = 3.14;
    double area = pi*radsq;
    double circ = pi*2*rad;
    cout << "\nThe area is: " << area << "\n\nThe circumference is: " << circ << "\n\n" <<endl;
    cin.get();

}

void valueA()
{
    int a; 
    int b;
    int c;
    a = 3; 
    b =4;
    c = 5;
    b = c;
    a = b;
    cout << "A: The Value of A is " << a;
    cout << " ";
}

void valueB()
{
    int a; 
    int b;
    int c;
    a = 3; 
    b =3;
    c = 4;
    c = b;
    b = a;
    a = c;
    cout << "B: The Value of A is " << a;
    cout << " ";
}

void valueC()
{
    double a = 3.0;
    double b = 6.0;
    double c = b / a;
    a = c;
    cout << "C: The Value of A is " << a;
    cout << " ";
}
void valueD()
{
    int a = 1;
    int b = 4;
    a = a * b;
    cout << "D: The Value of A is " << a;
    cout << " ";
}
void valueE()
{
    int a = 3;
    int b = 2;
    a = a % b;
    cout << "E: The Value of A is " << a;
    cout << " ";
}

void boolYa()
{   
    cout << "\n\nis it raining? say true or false.\n\n";
    bool rain;
    cin >> rain;
    
    if(rain)
    {
        cout << " Take an Umbrella" << endl;
    }
    else
    {
        cout << " Leave the Umbrella" << endl;
    }
}


void multElse()
{
    bool sunday = true, monday = false, tuesday = false, wednesday = false, thursday = false;

    if(sunday == true)
    {
        cout << "Set alarm for 10, gotta be in CodeLab 1 session" << endl;
    }
    else if(monday == true)
    {
        cout << "Set alarm for 10, gotta be in CodeLab 1 session" << endl;
    }
    else if(tuesday == true)
    {
        cout << "No session for CodeLab 1; Check timetable for othermodules." << endl;
    }
    else if(wednesday == true)
    {
        cout << "No session for CodeLab 1; Check timetable for othermodules." << endl;
    }
    else if(thursday == true)
    {
        cout << "No session for CodeLab 1; Check timetable for othermodules." << endl;
    }
    else
    {
        cout << "Must be the weekends or holiday time" << endl;
    }
}

void goodMorning()
{
    cout << "input time and i will tell you if it is ante meridiem, or post meridiem, tas babatiin kita ayieee: \n" << endl;
    int time;
    cin >> time;
    if(time < 12)
    {
        cout << "\nGoodmorning, kumain ka na? yieeee\n"  << endl;
    }
    else if(time < 18)
    {
        cout << "\nIts tanghali na wtf pare\n"  << endl;
    }
    else if(time < 21)
    {
        cout << "\nbruh gabi na di ka pa gising\n"  << endl;
    }
    else if(time < 23)
    {
        cout << "\ntulog na tanga\n" << endl;
    }
    else
    {
        cout << "gago ka ba? sa tingin mo oras yan bobo\n" << endl;
    }
    cin.get();
}

void canVote()
{   
    cout << "Good day, welcome to the voting centre, how old are you?\n\n" << endl;
    int age;
    cin >> age;
    if(age > 18)
    {
        cout << "\n\nYou can vote.\n\n" << endl;
    }
    else
    {
        cout << "\n\nSorry, you are not old enough to vote.\n\n" << endl;
    }
    cin.get();
}

void oddEven()
{
    cout << "\n\nInput a number to check whether it is an odd or even number: \n\n";
    int num;
    cin >> num;
    
    
    if(cin.fail()) // to check for user input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid number. \n" << endl;
    cin>>num;
    }
    if(!cin.fail()) //allows for the code to end if user input error is present.

    if((num & 1) == 0)
    {
        cout << "\n\n" << num << " is an even number.";
    }
    else
    {
        cout << "\n\n" << num << " is an odd number.";
        
    }
    cin.get();


}

void posNegZero()
{   
    cout << "\n\nInput a number to check whether is value is positive, negative an odd or even number: \n\n";
    int num;
    cin >> num;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid number. \n" <<endl;
    cin>>num;
    }
    if(!cin.fail()) //allows for the code to end if user input error is present.

    if(num > 0)
    {
        cout << "\n\nThe number inputted is a positive number.\n\n" << endl;
    }
    else if(num < 0)
    {
        cout << "\n\nThe number inputted is a negative number.\n\n" << endl;
    }
    else
    {
        cout << "\n\nThe number inputted is 0.\n\n" << endl;
    }
    cin.get();
}

void profitLoss()
{
    cout << "Enter Purchase price:  \nAED ";
    int buy;
    cin >> buy;
    if(cin.fail()) 
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid number. \n" <<endl;
    cin>>buy;
    }
    if(!cin.fail()) 

    cout << "\nEnter Sale price: \nAED ";
    int sell;
    cin >> sell;

    
    if(cin.fail())
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid number. \n" <<endl;
    cin>>sell;
    }
    if(!cin.fail())
    
    if(sell > buy)
    {
        cout << "\n\nSale profit";
        cout << "\nProfit: AED "<< sell - buy;
    }
    else if(sell == buy) //if no profit nor loss has been made.
    {
        cout << "\n\nBreak-even point.\n\n";
    }
    else
    {
        cout << "\n\nSale loss";
        cout << "\nLoss: AED " << buy - sell; 
    }
}

void whatShp()
{
    cout << "With a shape having around 3 to 10 sides in mind, input its number of sides: ";
    int side;
    cin >> side;

    if(cin.fail())
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, invalid number input. \n" <<endl;
    cin>>side;
    }
    if(!cin.fail())

    switch (side)
    {
        case 3:
        cout << "\n\nA shape with 3 sides would be a Triangle.\n" << endl;
        break;
        case 4:
        cout << "\n\nA shape with 4 sides would be a Square/Quadrilateral.\n" << endl;
        break;
        case 5:
        cout << "\n\nA shape with 5 sides would be a Pentagon.\n" << endl;
        break;
        case 6:
        cout << "\n\nA shape with 6 sides would be a Hexagon.\n" << endl;
        break;
        case 7:
        cout << "\n\nA shape with 7 sides would be a Heptagon.\n" << endl;
        break;
        case 8:
        cout << "\n\nA shape with 8 sides would be a Octagon.\n" << endl;
        break;
        case 9:
        cout << "\n\nA shape with 9 sides would be a Nonagon.\n" << endl;
        break;
        case 10:
        cout << "\n\nA shape with 10 sides would be a Decagon.\n" << endl;
        break;
        default:
        cout << "\n\nERROR: Sorry, number input was not within designated range.\n" << endl;
        break;
    }
}

void shpArea()
{
cout << "\nArea finder for square, triangle, and rectangle.\n"; 
    cout << "\nChoose a shape to find the area for: ";
    cout << "\n\n1. Rectangle\n2. Triangle\n3. Square";
    cout<<"\n\nPlease select one and input its designated number (1, 2, or 3).\n" << endl;
    int shp;
    cin >> shp;

    switch(shp)
    {
        case 1:
            cout << "\n\nPlease enter the rectangle's length: ";
            double l;
            cin >> l;
            cout << "\n\nPlease enter the rectangle's width: ";
            double w;
            cin >> w;
            cout << "\n\nThe area of the rectangle is " << l*w;
            break;
         case 2:
            cout << "\n\nPlease enter the triangle's base: ";
            double b;
            cin >> b;
            cout << "\n\nPlease enter the rectangle's height: ";
            double h;
            cin >> h;
            cout << "\n\nThe area of the rectangle is " << b*h / 2;
            break;
        case 3:
            cout << "\n\nPlease enter the square's sides' length: ";
            double a;
            cin >> a;
            cout << "\n\nThe area of the rectangle is " << a*a;
            break;
        
        default:
            break;

    }
}
void logicalAnd() //lecture 7
{
    int porridgeTemp = 30;

    if ((porridgeTemp >40) && (porridgeTemp < 60))
    {
        cout << "Thats just right!" << endl;
    }
}

void logicalOR()
{
    bool hasVisa = true;
    bool hasDriveLicense = false;

    if ( (hasVisa == true) || (hasDriveLicense == true))
    {
        cout << " You can drive";
    }
    else 
    {
        cout << "you cannot drive";
    }
}

void logicalNOT()
{
    int brotherA = 15;
    int brotherB = 12;
    if (!(brotherA < brotherB))
    {
        cout << "bro a older";
    }
}

void logicalALL()
{
    bool visa = false;
    bool driv = true;
    bool drunk = false;

    if ((visa || driv) && !drunk)
    {
        cout << "you can drive" << endl;

    }
    else
    {
        cout << "sorry no drive";
    }
}

void themPark()
{
    cout << "Welcome to the Legoland Dubai! This is Formula Rossa, how old are you?\n";
    int age;
    cin >> age;
    cout << "How tall are you?\n";
    double height;
    cin >> height;
    

    if((height > 0.6) && (age > 5))
    {
        cout << "yalla";
    }
    else
    {
        cout << " shway shway";
    }
}

void nestedIF()
{
    bool zombieAtDoor = true;
    bool fight = false;

    if (zombieAtDoor)
    {
        if(fight)
         {
        cout << "grab a weapon";

    }
    else
    {
        cout << "run";
    }
    }

   
    else
    {
        cout << "let em in";
    }
}

void paris()
{
    cout << "What is the capital of France?\n";
    string capital;
    cin >> capital;

    if ((capital == "Paris")||(capital == "paris")||(capital == "PARIS"))
    {
        cout << "\nThat is correct.";
    }
    
}

void letChck()
{
    cout << "Give me a letter, I will tell you if it is a vowel or consonant.\n\n";
    string ltr;
    cin >> ltr;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
    cin>>ltr;
    }
    if(!cin.fail()) //allows for the code to end if user input error is present.

    if((ltr == "a") || (ltr == "e") || (ltr == "i") || (ltr == "o") || (ltr == "u") || (ltr == "A") || (ltr == "E") || (ltr == "I") || (ltr == "O") || (ltr == "U"))
    {
        cout << "Vowel";
    }
    else
    {
        cout << "consonant";
    }

}

void lanceKyle()
{
    cout << "Who is ur bff: \n";
    cout << "Choose: ";
    
    
    string choice1;
    cin >> choice1;
    
    cout << "Who is ur 2nd bff: \n";
    cout << "Choose: ";

    string choice2;
    cin >> choice2;

    cout << "How old are you: \n";

    cout << "Choose: ";
    

    double choice3;
    cin >> choice3; //cin = console input

    cout << "Where do you live?\n\n";
    string home;
    cin >> home;
    
    cout << "\n\nYour bff is " << choice1 << " Your other bff is " << choice2 << " you are " << choice3 << " years old." << "U live in " << home;
    
}

void gradeBD()
{
    cout << "Input the student's grade percentage: \n\n";
    double grd;
    cin >> grd;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
    cin>>grd;
    }
    if(!cin.fail()) //allows for the code to end if user input error is present.

    if ((grd == 70) || (grd >70))
    {
        cout << "\nThe student's final grade is an A.\n\n";
    }
    else if ((grd == 60) || (grd >60) && (grd<70))
    {
        cout << "\nThe student's final grade is a B.\n\n";
    }
    else if ((grd == 50) || (grd >50) && (grd<60))
    {
        cout << "\nThe student's final grade is a C.\n\n";
    }
    else if ((grd == 40) || (grd >40) && (grd<50))
    {
        cout << "\nThe student's final grade is a D.\n\n";
    }
    else
    {
        cout << "\nThe student's final grade is a F.\n\n";
    }
    
    
}

void band()
{
    cout << "So you need a guitarist or a drummer for your band...\n\nYou need a guitarist or a drummer.\n\n";
    cout << "Take your friend with you.\n\n";
    cout << "Do they play an instrument?\n\n";
    cout << "\n\nYes or No:  ";

    string musicalFriend;
    
    cin >> musicalFriend;

    if((musicalFriend == "yes")||(musicalFriend =="Yes")||(musicalFriend =="YES"))
    {
        cout << "\n\nWhat instrument does he play?\n\n";
        cout << "\nGuitar or drums?\n\n";
        cout << "\nType in their instrument of choice: ";

    

        string friendPlays;
        cin >> friendPlays;

        if((friendPlays == "guitar") || (friendPlays == "Guitar") || (friendPlays == "Drum") || (friendPlays == "drum") || (friendPlays == "Drums") || (friendPlays == "drums")|| (friendPlays == "GUITAR")|| (friendPlays == "DRUM")|| (friendPlays == "DRUMS"))
        {
        cout << "\n\nGreat! Your friend plays the " << friendPlays << ". Your friend can join.";
        }
        else
        {
            cout << "\n\nSorry, that's not the instrumentalist your looking for.";
        }
    }
    else
    {
        cout << "\n\nSorry, they can't join";
    }

    
    
    
}

void dxbMall()
{
    cout << "You have arrived in Dubai Mall. \n\n";
    cout << "Now it's time to wait for your friend. \n\n";
    cout << "Press enter to continue... \n\n";
    cin.get();
    cout << "Your friend just messaged you. They say they will be late. \n\n";
    cout << "How late do you think they said they will be? \n\n";
    cout << "Minutes: ";
    
    double time;
    cin >> time;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
    cin>>time;
    }
    if(!cin.fail())

    if (time > 14)
    {
        cout << "\nSince your friend is going to be " << time << " minutes late, you should go do something.\n";
        cout << "\nHow much money do you have?\n";
        cout << "\nAED: ";
        double cash;
        cin >> cash;

        if(cin.fail()) // to check for inappropriate input error
        {
        cin.clear();
        cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
        cin>>cash;
        }
        if(!cin.fail())
            
            if (cash > 4)
            {
                cout << "\nYou should go get some coffee.\n\n" << endl;
            }
            else
            {
                cout << "\nYou should go for a walk around town.\n\n" << endl;
            }
    }
    else
    {
        cout << "\nJust sit and wait for them at the food court.\n\n" << endl;
    }
}

void richterScl()
{   
    cout << "Richter Scale desciptor. \n\n";
    cout << "Input an earthquake's magnitude: \n\n";
    double grd;
    cin >> grd;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid value. \n" <<endl;
    cin>>grd;
    }
    if(!cin.fail())

    if ((grd > 10.0) || (grd == 10.0))
    {
        cout << "\nMeteoric level.\n\n";
    }
    else if ((grd == 8.0) || (grd >8.0) && (grd<10.0))
    {
        cout << "\nGreat level.\n\n";
    }
    else if ((grd == 7.0) || (grd >7.0) && (grd<8.0))
    {
        cout << "\nMajor level.\n\n";
    }
    else if ((grd == 6.0) || (grd >6.0) && (grd<7.0))
    {
        cout << "\nStrong level.\n\n";
    }
    else if ((grd == 5.0) || (grd >5.0) && (grd<6.0))
    {
        cout << "\nModerate level.\n\n";
    }
    else if ((grd == 4.0) || (grd >4.0) && (grd<5.0))
    {
        cout << "\nLight level.\n\n";
    }
    else if ((grd == 3.0) || (grd >3.0) && (grd<4.0))
    {
        cout << "\nMinor level.\n\n";
    }
    else if ((grd == 2.0) || (grd >2.0) && (grd<3.0))
    {
        cout << "\nVery minor level.\n\n";
    }
    else
    {
        cout << "\nMicro Level.\n\n";
    }
}

void pepsians()
{
    cout << "PEPSIANS GROUP CODE";
}

void calc()
{
    cin.clear();
    int a,b;
    cout << "\n\nenter two numbers\n\n";
    cin >> a >> b;
    cout << "\n\npick a calculation";
    cout << "\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\n" << endl;
    int input;
    cin >> input;
    cout << "\n\n";

    switch(input)
    {
        case 1:
        cout << (a+b);
        break;
        case 2:
        cout << (a-b);
        break;
        case 3:
        cout << (a*b);
        break;
        case 4:
        cout << (a/b);
        break;
        
        default:
        cout << "Invalid Input";
    }
}

void grpcs()
{
    cout << "\nWould you like some sugar?" << endl;
    cout << "\nInput:\n'Y' if yes\n'N' if no" << endl;
    char input;
    cin >> input;

    switch(input)
    {
        case 'Y':
        case 'y':
            cout << "\nAddding sugar..." << endl;
            break;
        case 'N':
        case 'n':
            cout << "\nno sugar requested.. ";
            break;
        default:
            cout << "\nERROR: invalid input";

    }
}
 
void gmovr()
{
    cout << "\nWould you like to play again?" << endl;
    cout << "\nInput:\n'Y' if yes\n'N' if no" << endl;
    char input;
    cin >> input;

    switch(input)
    {
        case 'Y':
        case 'y':
            cout << "\nRestarting game..." << endl;
            break;
        case 'N':
        case 'n':
            cout << "\nExiting game... ";
            break;
        default:
            cout << "\nERROR: invalid input";

    }
}

void calndr()
{
    cin.clear();
    cout << "\n\nDay checker for each month!\n\n";
    cout << "\n\npick a month\n";
    cout << "\n1.January\n2.February\n3.March\n4.April" << endl;
    cout << "5.May\n6.June\n7.July\n8.August" << endl;
    cout << "9.September\n10.October\n11.November\n12.December\n" << endl;
    cout << "Month: ";
    int input;
    cin >> input;
    cout << "\n\n";

    switch(input)
    {
        case 1:
        cout << "January has 31 days.";
        break;
        case 2:
        cout << "February has 29 days or 28 days on a leap year.";
        break;
        case 3:
        cout << "March has 31 days.";
        break;
        case 4:
        cout << "April has 30 days.";
        case 5:
        cout << "May has 31 days.";
        case 6:
        cout << "June has 30 days.";
        case 7:
        cout << "July has 31 days.";
        case 8:
        cout << "August has 31 days.";
        case 9:
        cout << "September has 30 days.";
        case 10:
        cout << "October has 31 days.";
        case 11:
        cout << "November has 30 days.";
        case 12:
        cout << "December has 31 days.";
        break;
        
        default:
        cout << "Invalid Input";
    }
}

void F2Ffuelmeup()
{
    cout << "\n\nHi, Welcome to ADNOC, select gas  you want\n\n";
    cout << "\n\nInput 'p' for petrol\nInput 'd' for diesel\n\n";
    char fuel;
    cin >> fuel;
    
    switch(fuel)
        {
        case 'p':
        case 'P':
            cout << "\nOk, how many litres?\n\n";
            cout << "L:";
            int la;
            cin >> la;
            cout << "\nThat would be $"<<2.44*la<<"\n" << endl;
            break;
            

        case 'd':
        case 'D':
            cout << "\n\nOk, how many litres?\n\n";
            cout << "\n\nL:";
            int lc;
            cin >> lc;
            cout << "\nThat would be $"<<2.38*lc<<"\n" << endl;
            break;
        default:
        {
            cout << "\nERROR: Please select between petrol or diesel.\n"<<endl;
            F2Ffuelmeup();

             
        }
        
           
        }
    

}

void F2Ftempconvrt()
{
    cout << "\n\nCelsius and Fahrenheit converter.\n\n";
    cout << "Hi, you can convert Celsius or Fahrenheit degrees here\n\n'c' for Celsius\n'f' for Fahrenheit.\n" << "Select temperature to convert: ";
    char temp;
    cin >> temp;
    switch(temp)
    {
        case 'c':
        case 'C':
        {
        cout << "\n\nInput temperature in Celsius Degrees: ";
        double cel;
        cin >> cel;
        double fah = cel*1.8 + 32;
        cout << "That would be " << fah << " degrees fahrenheit.";
        break;
        }
        case 'f':
        case 'F':
        {
            cout << "\n\nInput temperature in Celsius Degrees: ";
            double fahr;
            cin >> fahr;
            double celsius = (fahr - 32)*0.5556;
            cout << "That would be " << celsius << " degrees fahrenheit.";
            break;
        }
        default:
        {
            cout << "error";
            break;
    }
    }
    

    cin.get();

}

void switchgrade()
{
    cout << "Enter your full name" << endl;
    string stdntName;
    getline(cin, stdntName);
    

    cout << "\nEnter your grade marks (0-100):  ";


    int grade;

    cin >> grade;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: not a valid input.";
    }

    else if (grade > 100)

    {


        cout << "\nPlease keep your marks within 0-100\n";
    }

    else

    {

        switch (grade/10)

        {

        case 10:

        case 9:
        case 8:

        {
            


            cout << stdntName <<", your grade is: A";


            break;
        }
        case 7:

        {    


            cout << stdntName << ", your grade is: B";


            break;
        }
        case 6:
        {
            


            cout << stdntName << ", your grade is: C";

            break;
        }
        case 5:
        {
            

            cout << stdntName << ", your grade is: D";


            break;
        }
        case 4:
        {
            



            cout << stdntName << ", your grade is: E";



            break;
        }
        default:
        {
            


            cout << stdntName << ", your grade is: F\n";


        }
        }
    }
}

void breakex()
{
    cout << "enter a whole number: " << endl;
    int usernum;
    cin >> usernum;

    int count = 3;
    while(true)
    {
        cout << count << endl;
            if(count == usernum)
            {
                break;
            }
            count++;
    }
}

void cinFailwhileloop()
{
    cout << "enter your age:\n";
    int age;
    cin >> age;
    while(cin.fail())
    {
        cout << "invalid input.\nPlease enter a valid age.";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> age;

    }
    cout << "your age is " << age;

}

void remainPositive()
{
    cout << " Enter a number: ";
    double myNum = 20;
    while (myNum > 0)
    {
        cout << myNum ;
        myNum = myNum - 0.5;
       
        
    }
    
    
}

void dowhile()
{
    string password = "1234password";
    string userInput;

    do{
        cout << "enter your password" << endl;
        cin >> userInput;
    } while(password != userInput);
    {
        cout << "enter your password" << endl;
        cin >> userInput;
    }

    cout << "welcome";
}

void FahtoCel()
{
    cout << "\n\nCONVERTING FAHRENHEIT TO CELSIUS.\n\n";
    cout <<"Type in temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nPlease re-enter temperature in Celsius: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> fahrenheit;

    }
    double celsius = (fahrenheit - 32)*0.5556;
     
    cout << "\n\nThat would be " << celsius << " degrees celsius.\n\n";
    cin.get();

}

void CeltoFah()
{
    cout << "\n\nCONVERTING CELSIUS TO FAHRENHEIT.\n\n";
    cout << "Type in temperature in Fahrenheit: ";
    double celsius;
    cin >> celsius;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nPlease re-enter temperature in Fahrenheit.";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> celsius;

    }
    double fahrenheit = celsius*1.8 + 32;
     
    cout << "\n\nThat would be " << fahrenheit << " degrees fahrenheit.\n\n";
    cin.get();

}

void program()
{
    system("CLS");

    cout << "\nCelsus and Fahrenheit Temperature converter\n\n";
    cout << "1. Celsius to Fahrenheit.\n2. Fahrenheit to Celsius.\n\n";
    cout << "Select a temperature type converter (1/2):  ";

    int userInput;
    cin >> userInput;

  

    switch (userInput)
    {
    case 1:
        CeltoFah();

        break;

    case 2:
        FahtoCel();

        break;
    
    default:

        
        
        cout << "ERROR: not a valid option.";
        
        
        
        
        break;
    }
}

void F2Fpassword()
{
    string password = "1234password";
    string userInput;
    int attempts = 0;

    
    cout << "\n\nPlease enter your password." << endl;
    cin >> userInput;
    while((password != userInput) && (attempts <3));
    {   
        attempts + 1;
        cout << "Incorrect passwod. You have "<<3-attempts<<" attempts left." << endl;
        cin >> userInput;
    }

    cout << "welcome";
}

void L9pass()
{
    cout << "\n\nPlease enter your password: \n\n";
    string pass = "123pass";
    string userInput;
    int attempts=5;
    cin >> userInput;
    
    while(userInput != pass)
    {
        attempts--;
        cout << "Incorrect password. You have "<<attempts<<" attempts left." << endl;

        cin.clear();
        cin.ignore(1000, '\n');
        
        if(attempts==0)
        {
            cout << "You are now locked out from ";
            break;
        }
        else
        {
            cin >> userInput;
        }
        

    }
    
    if(attempts==0)
    {
        cout << "the system.";
    }
    else
    {
        cout << "Welcome.";
    }

}

void L9dowhileloop()
{
    char input;
    do
    {
        cout << "\nWould you like to Quit (Y/N)?" <<
        endl;
        cin >> input;
    }

    while( (input != 'Y') && (input != 'y') );
    

    cout <<"Thanks for playing!";
}

void fivemarksavg()
{
    cout << "Sum and average for grade marks calculator (Marks from 0-100).\n\n";
    double a,b,c,d,e;
    cout << "Mark in the first subject's marks: ";
    cin >> a;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the first subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> a;

    }
    while((a > 100)||(a<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the first subject's marks: ";
        cin >> a;
    }
    cout << "\nMark in the second subject's marks: ";
    cin >> b;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the second subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> b;

    }
    while((b > 100)||(b<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the second subject's marks: ";
        cin >> b;
    }
    cout << "\nMark in the third subject's marks: ";
    cin >> c;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the third subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> c;

    }
    while((c > 100)||(c<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the third subject's marks: ";
        cin >> c;
    }
    cout << "\nMark in the fourth subject's marks: ";
    cin >> d;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the fourth subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> d;

    }
    while((d > 100)||(d<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the fourth subject's marks: ";
        cin >> d;
    }
    cout << "\nMark in the last subject's marks: ";
    cin >> e;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the last subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> e;

    }
    while((e > 100)||(a<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the last subject's marks: ";
        cin >> e;
    }
    
    double sum = a+b+c+d+e;
    cout << "\n\nThe sum total of all subject marks is: " <<sum<< "\nThe mean total of the marks are: "<<sum/5<<"\n"<<endl;



}

void fivemarksavgtest()
{
    cout << "Sum and average for grade marks calculator (Marks from 0-100).\n\n";
    double a,b,c,d,e;
    cout << "Mark in the first subject's marks: ";
    cin >> a;
    while((a > 100)||(a<0)||(cin.fail()))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the first subject's marks: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> a;
    }
    cout << "\nMark in the second subject's marks: ";
    cin >> b;
    while((b > 100)||(b<0)||(cin.fail()))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the second subject's marks: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> b;
    }
    cout << "\nMark in the third subject's marks: ";
    cin >> c;
    while((c > 100)||(c<0)||(cin.fail()))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the third subject's marks: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> c;
    }
    cout << "\nMark in the fourth subject's marks: ";
    cin >> d;
    while((d > 100)||(d<0)||(cin.fail()))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the fourth subject's marks: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> d;
    }
    cout << "\nMark in the last subject's marks: ";
    cin >> e;
    while((e > 100)||(a<0)||(cin.fail()))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the last subject's marks: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> e;
    }
    
    double sum = a+b+c+d+e;
    cout << "\n\nThe sum total of all subject marks is: " <<sum<< "\nThe mean total of the marks are: "<<sum/5<<"\n"<<endl;



}

void agedesc()
{
    cout<<"Hello. What is your current age? "<<endl;
    double age;
    cin >>age;
    if ((age >=10)&&(age <=12))
    {
        cout <<"\n\nYou are in your pre-teen age.";
    }
    else if ((age >=13)&&(age <=19))
    {
        cout <<"\n\nYou are in your teen age.";
    }
    else if ((age >=20)&&(age <=29))
    {
        cout <<"\n\nYou are in your twenties.";
    }
    else if ((age >=30)&&(age <=39))
    {
        cout <<"\n\nYou are in your thirties.";
    }
    else if ((age >=40)&&(age <=49))
    {
        cout <<"\n\nYou are in your fourties.";
    }
    else if ((age >=50)&&(age <=59))
    {
        cout <<"\n\nYou are in your fifties.";
    }
    else if ((age >=0)&&(age <=9))
    {
        cout <<"\n\nYou are in your child age.";
    }
    else if (age >=60)
    {
        cout <<"\n\nYou are in your elderly age.";
    }
    else
    {
        cout<<"Please enter a valid age.";
    }
}

void calculatorpractice()
{
    int num1, num2;
    char op;

    cout<<"enter first number: \n\n";
    cin >>num1;
    system("CLS");
    cout << "\n\n"<<num1<<" __ = __";
    
    cout<<"\n\n+, -, *, /\nSelect and enter an operator: ";
    cin>>op;
    system("CLS");
    cout << "\n"<< num1<<" "<<op<<" = __";  
    cout<<"\nenter second number: ";
    cin >>num2;
    
    if(op == '+'){
        cout << "\n= "<<num1 + num2;
    }
    else if(op == '-')
    {
        cout << "\n= "<<num1 - num2;
    }
    else if(op == '*')
    {
        cout << "\n= "<<num1 * num2;
    }
    else if(op == '/')
    {
        cout << "\n= "<<num1 / num2;
    }
    else
    {
        cout<< "\nERROR: Please select a vaid operator.";
    }
    



}


int main()
{     
    system("CLS");
    
    int num = 25;
    int guess;
    int tries = 5;
    cout << "guess my age: ";
    cin >> guess;

    while(guess != num)
    {   
        if(tries==0){
            break;
        }
        else
        {
        cout << "Wrong!\nYou have "<<tries<<" guessses left.\n";
        cout <<"guess again: ";
        cin >> guess;
        tries--;    
        }
        
    }

    if (guess != num)
    {
        cout << "\n\nStop it, you are offending me.";
        
    }
    else if (guess = num)
    {
        cout << "\n\nWow you are so smart!!";
    }
    
    
    


    return 0; 
}




