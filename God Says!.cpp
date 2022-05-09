/*
        God Says! Talk with god with god! Get predictions of the Future 

        In Loving Memory of The Late Terry A. Davis

        December 15, 1969 – August 11, 2018

        Sole Creator Of Temple OS - Gods Third Temple

        In his adult life he was plaqued by dellusions, often going into 
        racist rants about the FBI. Even than his genuis shone through, taking 
        the collosal task of creating an operating system, from scratch, by himself.
        He would often claim that you could talk to god through Temple OS using a program 
        called "God Says!", this program is to emulate "God Says!"

        ///// Created by JetBlackSavior - 
        This program isn't going to use great RNG, this program is more or less meant to honour his memory

*/

#include <iostream>
#include <ctime>
#include <fstream>//gets text input
#include <string>

void give_god_a_second();
int main()
{
    std::string myText;
    std::cout << "Hello God!\n";
    srand(time(NULL));
    std::ifstream MyReadFile("godtext.txt");
    while (std::getline(MyReadFile, myText)) {
        // Output the text from the file
        std::cout << myText;
    }
    
    int rnandom = rand() % 100 + 1;
    if (rnandom <= 30) {
        give_god_a_second();
    }
    else {//randomly generated text from a text file


    }



}
void give_god_a_second() {
    std::cout << "God needs time to think of something!\n";
    system("timeout /T 20 ");

}