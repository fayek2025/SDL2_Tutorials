#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

using namespace  std;


int main(int argc  , char* argv[])
{
<<<<<<< HEAD
        SDL_Window* window ;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL can not be initialized!" << SDL_GetError();

    }
    else
    {
        cout << "SDL video system is ready to go\n" << endl;

    }

    window = SDL_CreateWindow("Mini Football Game" , 
                              0,
                              0,
                              640,
                              480,
                              SDL_WINDOW_SHOWN);

    

    //Delay our pause 
    SDL_Delay(10000);

=======
    SDL_Window  * window = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) == 0)
    {
        cout << "No SDL input is valid!"<<endl;

        
    }
    else{
        cout << " Sdl run perfectly!"<< endl;
        
    }
    
    //Creating new windows
    window = SDL_CreateWindow("my first game",0 , 0 , 700 , 300 ,
     SDL_WINDOW_SHOWN);

     bool gameIsRunning = true;

     //Initiating infinite loop
     while(gameIsRunning)
     {
        SDL_Event event;
        //starting our event loop
        while (SDL_PollEvent(&event))
        
        {
            //handle each specific event
            if(event.type == SDL_QUIT)
            {
                gameIsRunning = false;
            }
        }
        
     }
    

    SDL_Delay(3000);

    SDL_DestroyWindow(window);

    SDL_QUIT;


        
        
    
>>>>>>> b087b7f8ae16aae230ecc7b60a8f3bd8474294ef
}