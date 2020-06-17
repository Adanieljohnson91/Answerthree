#include <iostream>

void PlayGame()
{

    int CodeA = 3;
    int CodeB = 4;
    int CodeC = 5;
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProblem = CodeA * CodeB * CodeC; 
    int AnswerA;
    int AnswerB;
    int AnswerC;
    
    std::cout << "Three numbers add up to thee: " << CodeSum << std::endl;
    std::cout << "But, they multiple to: " << CodeProblem << std::endl;
    std::cout << "What answer is ye's of what the first digit could be?" << std::endl;
    std::cout << "ANSWER!!: ";
    std::cin >> AnswerA;
    std::cout << "Sound Choice that may be, a second digit we expect from thee.";
    std::cout << "\nANSWER!!: ";
    std::cin >> AnswerB;
    std::cout << "Again you go, we shall know soon, a third answer will unlock a new";
    std::cout << "\nAnswer!!: ";
    std::cin >> AnswerC;
    int GuessSum = AnswerA + AnswerB + AnswerC;
    int GuessProblem = AnswerA * AnswerB * AnswerC;
    if(CodeSum == GuessSum && CodeProblem == GuessProblem)
    {
        std::cout << "You have \"achieved\" Great things";
        std::cout << "\n                                       .";
        std::cout << "\n   ___------~~~~~~~~~~~----__         .:.         __----~~~~~~~~~~~------___";
        std::cout << "\n ~~ ~--__          ......====\\~~    .:::.    ~~//====......          __--~ ~~";
        std::cout << "\n        ~\\ ...::::~~~~~~  //|||    .:::::.    |||\\  ~~~~~~::::... /~";
        std::cout << "\n       -~~\\_            //  |||***.(:::::).***|||  \\            _/~~-";
        std::cout << "\n            ~\\_        // *******.:|\\^^^/|:.******* \\        _/~";
        std::cout << "\n                \\      / ********.::(>: :<)::.******** \\      /";
        std::cout << "\n                 \\   /  ********.::::\\\\|//::::.******** \\   /";
        std::cout << "\n                  \\ /   *******.:::::(o o):::::.*******  \\ /";
        std::cout << "\n                   /.   ******.::::'*|V_V|***`::.******   .\\";
        std::cout << "\n                     ~~--****.:::'***|___|*****`:.****--~~";
        std::cout << "\n                           *.::'***//|___|\\*****`.*";
        std::cout << "\n                           .:'  **/##|___|##\\**  ";
        std::cout << "\n                          .    (v(VVV)___(VVV)v)";
    }
    else
    {
        std::cout << "Thou art not worthy of the blessing";
    }
    
}

void PrintIntroduction()
{
    std::cout << "Welcome Oolag, We have been awaiting you..." << std::endl;
    std::cout << "One, two, One, Two, THREEE!!!" << std::endl;
    std::cout << "You have three answers to give thee..." << std::endl;
}

int main()
{   
    PrintIntroduction();
    PlayGame();

    
    return 0;
}