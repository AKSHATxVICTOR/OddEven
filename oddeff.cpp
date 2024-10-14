#include<iostream>
#include<ctime>

bool toss(int c);
bool playerBat(bool a);


int main(){
    int call;
    do{
        std::cout<<"Call: 1 For Heads or 2 For Tails ";
        std::cin>>call;
    }while(call!=1 && call!=2);

    bool d=toss(call);
    bool winner=playerBat(d);

    winner ? std::cout<<"W \n" : std::cout<<"L \n";

}

bool toss(int c){
    bool bat;
    srand(time(0));
    int num = rand()%2+1;
    if(c==num){
        int toss;
        std::cout<<"You Won The Toss \n";
        std::cout<<"********************************* \n";
        std::cout<<"Choose 1 For Bating or 2 For Bowling \n";
        do{
            std::cin>>toss;
            if (toss==1){
                std::cout<<"Batting"<<"\n";
                bat=1;
                return bat;
                break;
            }
            else{
                std::cout<<"Bowling"<<"\n";
                bat=0;
                return bat;
                break;
            }
            
        }while(toss!=1 && toss!=2);
    }
    else{
        
        std::cout<<"L \n";
        srand(time(0));
        int toss = rand()%2+1;
        switch(toss){
            case 1 : std::cout<<"We choose to bat first \n";
                bat = 0;
                return bat;

            case 2 :  std::cout<<"We choose to bowl first \n";
                bat = 1;
                return bat;
              
           
        }
    }
    return bat;
}

bool playerBat(bool a){
    bool out;
    bool winner;
    switch(a){
        case true :
        int play;
        int target;
        target=0;
        do{
            std::cout<<"Type the number you wanna score: ";
            std::cin>>play;
            std::cout<<"\n";

            if(play < 1 || play > 10){
            std::cout<<"between 1 and 10 "<<"\n";
            continue;
            }
            target+=play;
            std::cout<<"total: "<<target<<std::endl;
            int ball;
            srand(time(0));
            ball = rand()%10+1;
            std::cout<<"ball: "<<ball<<"\n";
            
            if(ball==play){
                std::cout<<"out \n";
                out =1;
            }
        }while(out!=1);

        std::cout<<"Your Final Score: "<<target<<"\n";
        std::cout<<"*************************"<<"\n";
        std::cout<<"Innings Over"<<"\n";
        std::cout<<"Target: "<<target+1<<"\n";

        bool outC;
        int playC;
        int ballP;
        int chase;
        chase=0;
        do{
            int ballP;
            std::cout<<"Enter What you wanna bowl: "<<"\n";
            std::cin>>ballP;  
                
            if(ballP < 1 || ballP > 10){
            std::cout<<"between 1 and 10 "<<"\n";
            continue;
            }

            srand(time(0));
            playC = rand()%10+1;
            std::cout<<"Computer Scored: "<<playC;
            std::cout<<"\n";

            
            chase+=playC;
            std::cout<<"total: "<<chase<<std::endl;
            

            if(chase>=target+1){
                std::cout<<"Computer Won \n"<<"L"<<"\n";
                winner=0;
                break;
            }
            if(ballP==playC){
                std::cout<<"out \n";
                outC =1;
                winner =1;
                break;
            }
        }while(outC!=1  || chase<=target+1);

        std::cout<<"Winner's Final Score: "<<std::max(target,chase)<<"\n";
        std::cout<<"*************************"<<"\n";
        std::cout<<"Innings Over"<<"\n";

        return winner;
        
        case false :
            int playC1;
            int ballP1;
            int target1;
            target1=0;
        do{
            int ballP1;
            std::cout<<"Enter What you wanna bowl: "<<"\n";
            std::cin>>ballP1;  
                
            if(ballP1 < 1 || ballP1 > 10){
            std::cout<<"between 1 and 10 "<<"\n";
            continue;
            }

            srand(time(0));
            playC1 = rand()%10+1;
            std::cout<<"Computer Scored: "<<playC1;
            std::cout<<"\n";

            
            target1+=playC1;
            std::cout<<"total: "<<target1<<std::endl;
            

            if(ballP1==playC1){
                std::cout<<"out \n";
                outC =1;
            }
        }while(outC!=1);

        std::cout<<"Target: "<<target1+1<<"\n";
        std::cout<<"*************************"<<"\n";
        std::cout<<"Innings Over"<<"\n";

        int play1;
        int chase1;
        chase1=0;
        int ball1;
        do{
            std::cout<<"Type the number you wanna score: ";
            std::cin>>play1;
            std::cout<<"\n";

            if(play1 < 1 || play1 > 10){
            std::cout<<"between 1 and 10 "<<"\n";
            continue;
            }
            chase1+=play1;
            
         
            srand(time(0));
            ball1 = rand()%10+1;
            std::cout<<"ball: "<<ball1<<"\n";

            std::cout<<"total: "<<chase1<<std::endl;
            
            if(ball1==play1){
                std::cout<<"out \n";
                out =1;
                winner=0;
                break;
            }
            if(chase1>=target1+1){
                std::cout<<"You Won \n"<<"L"<<"\n";
                winner=1;
                break;
            }
        }while(out!=1 || chase1<=target1+1);

        std::cout<<"Winner's Final Score: "<<std::max(target1,chase1)<<"\n";
        std::cout<<"*************************"<<"\n";
        std::cout<<"Innings Over"<<"\n";

        return winner;
        break;
        }
    return winner;
}