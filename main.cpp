#include <iostream>
#include <SDL2/SDL.h>
#include <glad/glad.h>

//version of opengl


using namespace std;




int main(int argc  , char* argv[])
{

        SDL_Window* window ;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL can not be initialized!" << SDL_GetError();

    }
    else
    {
        cout << "SDL video system is ready to go\n" << endl;

    }

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION , 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION , 4);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK , SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER , 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE , 24);
    window = SDL_CreateWindow("Mini Football Game" , 
                              50,
                              0,
                              640,
                              480,
                              SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    SDL_GLContext context;
    context = SDL_GL_CreateContext(window);

    //setup our function pointer
    gladLoadGLLoader(SDL_GL_GetProcAddress);
    
    bool gameIsRunning = true;

    while(gameIsRunning != false)
    {
        glViewport(0 , 0 , 640 , 480);

        SDL_Event event;

        while(SDL_PollEvent(&event))
        {   
            //handling events
            if (event.type == SDL_QUIT)
            {
                gameIsRunning = false;
            }

            if (event.type = SDL_KEYDOWN)
            {
                if (event.key.keysym.sym == SDLK_w)
                {
                    cout << "'W' key pressed!" << endl;
                }
            }

            glClearColor(1.0f , 0.0f , 0.0f , 1.0f);
    
            glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
            SDL_GL_SwapWindow(window);
        }
    }

    //Delay our pause 
    //SDL_Delay(3000);
    
    //Destroying windows
    SDL_DestroyWindow(window);

    //Quiting SDL window also turning off audio or video system
    SDL_Quit();


}