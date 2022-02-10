class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      //initialising a variable to keep track of the last digit is less than 9 or greater than 9
        int b=0;

        //iterating through the array fron the end
          for(int i=digits.size()-1;i>=0;i--)
           {

           //checking if the last element in the array is less than 9
               if(digits[i]<9 )
               {
                 //then adding '1' to that element,changing the variable 'b' = 1 
                 //and breaking from the loop
                   digits[i] = digits[i]+1;
                   b=1;
                   break;
               }
              else
              {
                 //if last element is greater than '9' than adding 1 to it gives zero, 
                 //we just repkace that element with '0' instead of adding '1'
                  digits[i] = 0;

              }
            }

        //if b is still zero, that means the final element in the array was greater than 9 
        //we need to add that 1 that would have been carried if we would have added '1'
        // instead we can just insert '1' at the beginning postion of the array
        // this can be seen in test cases like 
           input(1) :[9]  output: [1,0]
           input(2) : [9,9] output: [1,0,0]
        if(b== 0 )
             digits.insert(digits.begin(),1);
        

        //finally we return the array 
        return digits;
    }
};