class Solution {
public:
    string checkNumberSign(int num) {
        // Implement the logic to check if the number is positive, negative, or zero
        //agr aap reurn kar rahe hai to dhiyan dijiye ga ki wo doble coloum me ho nhi to int ke sath mention ho
        if(num>0){
            return "Positive";
        }
        else if(num<0){
            return"Negative";
        }
        else{
            return "Zero";

        }
    }
};