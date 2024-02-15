#include <cstdlib>
#include <iostream>
#include <string>

#include "defines.hpp"
#include "motor.hpp"
#include "fontConfig.hpp"


using namespace std;



int main(int argc, char *argv[])
{
    //Set the window configuration
    setWindowParameters(SIZE_FONT_WIDTH, SIZE_FONT_HEIGH);
    
    
    MOTOR mainView(76,76);
    
    mainView.printScene();

    helloWorldHeaders();   
    
    
    cout << "Hola mundo en el main "  << endl;
    
    system("PAUSE");
       
    return EXIT_SUCCESS;
}