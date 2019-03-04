class Solution {
public:
    int myAtoi(string str) {

        if(str.empty())
            return 0;
        int sign=1;
        long int result = 0;
        int i;
          for(i=0;i<str.size();i++){
                 if(str[i] == ' ')
                    continue;

          if(str[i]=='+' || str[i] =='-'){
             sign = (str[i++] == '-')? -1:1;
          }
          while('0' <=str[i] && str[i] <='9'){
              result = result * 10 + (str[i] -'0');
              if(result*sign >= INT_MAX) 
                  return INT_MAX;
              if(result*sign<=INT_MIN)
                  return INT_MIN;
              i++;
            }
     return result*sign;
         }
        return 0;
    }
};
