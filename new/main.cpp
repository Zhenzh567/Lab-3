#include <iostream>
int main(){
    int n;
    std::cout<<"n = ";
    std::cin>>n;
    float c = 0;
    float mini = 10.12;
    int k = 0;
    int min_index = 0; // переменная для номера минимального элемента
    int current_index = 0; // счетчик текущего элемента
    for (int i = 1;i<=n;++i){
        float a;
        std::cin>>a;
        current_index += 1;
        if (a>10.12){
            k += 1;
            //std::cout<<"error"<<std::endl;
            if (k==n){
                std::cout<<"SUPPERERROR"<<std::endl;
                //goto flag
            }
            continue;
        }
        else{
            c += a;
            if (a<mini){
                mini = a;
                min_index = current_index;
            }
            

        }
    }
    std::cout<<"summa = "<<c<<std::endl;
    std::cout<<"minimum = "<<mini<<std::endl;
    std::cout<<"index of minimum = "<<min_index<<std::endl;
    //flag:;
    //2 часть
    int x;
    std::cin>>x;
    int j = 0;
    int y = 0;
    if (abs(x)<1000){

        while (x!=0){
            j += 1;
            int b = x%10;
            if (b == 3){
                y = j;

            }
            x/=10;   
        }
    }
    std::cout<<y<<std::endl;
return 0;
}




