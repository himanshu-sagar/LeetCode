class Solution {
public:
   
    
    string keypadCode(int n)
    {
        switch(n)
        {
        case 0: return "";
            break;
        case 1: return "";
            break;
        case 2: return "abc";
            break;
        case 3: return "def";
            break;
        case 4: return "ghi";
            break;
        case 5: return "jkl";
            break;
        case 6: return "mno";
            break;
        case 7: return "pqrs";
            break;
        case 8: return "tuv";
            break;
        case 9: return "wxyz";
            break;
        default: return "";
            break;
        }
    }
void letterCombHelper(int num,vector<string> &output,string str)
   {
        if(num==0)
        {
            output.push_back(str);
            return;
        }

        string keyCode=keypadCode(num%10);
        for(int i=0;i<keyCode.size();i++)
        {
            letterCombHelper(num/10,output,keyCode[i]+str);
        }
        
        
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> output;
        int num;
        if(digits!="")
            num=stoi(digits);
        else
            return output;
        letterCombHelper(num,output,"");
        return output;
    }
};