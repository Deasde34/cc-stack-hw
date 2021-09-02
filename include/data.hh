#define SIZE 5

class STACK
{
    private:
        int num[SIZE];
        int top;
    public:
        STACK();    
        int push(int);
        int pop();
        int isEmpty();
        int isFull();
        void displayItems();
        void deleteEven();
};

STACK::STACK(){
    top=-1;
}
 
int STACK::isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;   
}
 
int STACK::isFull(){
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
 
int STACK::push(int n){
    if(isFull()){
        return 0;
    }
    ++top;
    num[top]=n;
    return n;
}
 
int STACK::pop(){

    int temp;

    if(isEmpty())
        return 0;
    temp=num[top];
    --top;
    return temp;
     
}
 
void STACK::displayItems(){
    int i; 
    std::cout << "STACK is: ";
    for(i=(top); i>=0; i--)
        std::cout<< num[i] <<" ";
    std::cout << std::endl;
}

void STACK::deleteEven(){
    int i, temp;
   for (i = (top); i >= 0; i-- ){

    temp=num[top];
    --top;
   }
}
    



    


