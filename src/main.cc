#include <iostream>
#include "data.hh"

int main()
{
    STACK stk;
    int choice, n,temp;
     
    do
    {
        std:: cout << std::endl;
        std::cout<<"0 - Exit."<< std::endl;
        std::cout<<"1 - Push Items."<< std::endl;
        std::cout<<"2 - Pop Items."<< std::endl;
        std::cout<<"3 - Mostrar Items (Print STACK)."<< std::endl;
         
        std::cout << "Introduce una Opcion: ";
        std::cin >> choice;
         
        switch(choice){
             
            case 1:
                std::cout << "Introduzca dato a insertar: ";
                std::cin >> n;
                temp=stk.push(n);
                if(temp==0)
                    std::cout << "El stack está lleno."<< std::endl;
                else
                    std::cout << temp <<"Dato Insertado."<< std::endl;
            break;
                 
            case 2:
                temp=stk.pop();
                if(temp==0)
                    std::cout << "STACK vacío. " << std::endl;
                else
                    std::cout << temp << " Se ha removido (popped)."<< std::endl;
            break;
             
            case 3:
                stk.displayItems();
                break;
             
            default:
                std::cout << "Opcion Invalida."<< std::endl;
        }   
    }while(choice!=0);
 
     
    return 0;
     
}
