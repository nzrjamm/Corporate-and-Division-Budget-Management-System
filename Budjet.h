//
// Created by RIzan on 7/13/2024.
//

#ifndef CONS_BUDJET_H
#define CONS_BUDJET_H


class Budjet {
    private:
        static double corpBudget;
        double divisionBudget;
    public:
        Budjet(){
            divisionBudget=0.0;
        }
        void addBudget(double b){
            divisionBudget +=b;
            corpBudget +=b; }
        double getDivisionBudget()const{
            return divisionBudget;
        }
        double getCorpBudget()const{
            return corpBudget;
        }
        static void mainOffice(double);

    };




#endif //CONS_BUDJET_H
