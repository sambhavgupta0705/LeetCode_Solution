class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        int c3=0,c5=0;
        for(int i=1;i<=n;i++)
        {
            string v="";
            c3++;c5++;
            if(c3==3){
                v+="Fizz";c3=0;}
            if(c5==5){
                v+="Buzz";c5=0;}
            if(v=="")
                v=to_string(i);
            s.push_back(v);
        }
        return s;
    }
};