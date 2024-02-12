#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>
using namespace std;
void Delay()
{
    std::chrono::milliseconds delayTime(500);
    std::this_thread::sleep_for(delayTime);
}
void Reset()
{
    HANDLE outHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    static constexpr COORD ZERO_COORD = { 0,0 };
    SetConsoleCursorPosition(outHandle, ZERO_COORD);
}
void frame0()
{
    cout << R"(
                                                                                                   
\----- ______---------------------------------------\                                 
 \   /  Q   Q \                                      \                               
  \  |   /--\ |                                       \                              
   \ |        |                                        \                             
    \/ _/--\ _\            ...         ...              \      ___________                     
     \                   | (@)       | (+)               \    | ATTACK = 1|                
      \                  t-/ \\      T/| |\               \    -----------                                           
       \                   | |         / \                 \                                                                             
         ---------------------------------------------------
)";
}
void frame1()
{
    cout << R"(

\----- ______---------------------------------------\                                 
 \   /  Q   Q \                                      \                               
  \  |   /--\ |                                       \                              
   \ |        |            ...         ...             \                             
    \/ _/--\ _\          | (@)       | (+)              \      ___________                       
     \                   t-/ \\      T/| |\              \    | ATTACK = 1|                       
      \                    | |         / \                \    -----------                                               
       \                                                   \                                                                             
         --------------------------------------------------- 
)";
}
void frame2()
{
    cout << R"(                                                      
               ----------                         
            /|\          |                          
             |           |                          
             T___(+) ____                            
                  |\|                              
                  | \                               
               \  | |                              
                \/|\|                              
                 /  \\                                                            
-------------------------------------------------
)";
}
void frame3()
{
    cout << R"(                                  
               ------- /|\                                         
              |         |                                                             
              |         T___(+)                                                       
               ____  ____    |\                                                          
                  | |        | \                                                           
                  | |     \  |                                                             
                  | |      \/ \                                                            
                  | |          \                                                           
                 /   \                          
-------------------------------------------------   
 )";
}
void frame4()
{
    cout << R"(
               ----------                                    
              |          |   /|\                                
              |          |    |                                 
               ____  ____     T___(+)                           
                  | |              |\                           
                  | |              | \                          
                  | |           \  |                            
                  | |            \/ \                           
                 /   \               \              
-------------------------------------------------
)";
}
void frame5()
{
    cout << R"(
               ----------                                 
              |          |               /|\              
              |          |                |               
               ____  ____                 T___(+          
                  | |                          |          
                  | |                          |          
                  | |                       \  |          
                  | |                        \/           
                 /   \                                    
-------------------------------------------------
)";




}
void frame6()
{
    cout << R"(  
               ----------                           
              |          |                            
              |          |                            
               ____  ____                              
                  | |                                  
                  | |                                  
                  | |                                  
                  | |                                  
                 /   \                                     
-------------------------------------------------
)";
}
int main()
{
    cout << R"(
           !                                                   
\----- ______--------------------------------------\        
 \   /  Q   Q \                                     \       
  \  |   /--\ |                                      \      
   \ |        |                                       \     
    \/ _/--\ _\             !           !              \    
     \                   | (@)       | (+)              \   
      \                  t-/ \\      T/| |\              \  
       \                   | |         / \                \ 
         --------------------------------------------------
)";
system("pause");
    for (size_t i = 0; i < 100000000; i++)
    {
        Reset();



        switch (i % 2)
        {
        case 0:
            frame0();
            break;
        case 1:
            frame1();
            break;
        case 2:
            frame2();
            break;
        case 3:
            frame3();
            break;
        case 4:
            frame4();
            break;
        case 5:
            frame5();
            break;
        case 6:
            frame6();
            break;
        case 7:
            break;

        default:
            break;
        }
        Delay();
    }

}