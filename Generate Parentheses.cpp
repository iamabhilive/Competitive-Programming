class Solution {
public:
    void generateParenthesis(string &strSoFar, vector<string> &result, int o, int c)
    {
	    if (o < 0 || c < 0 || o > c)
	    {
		    return;
	    }
	    else if (o == 0 && c == 0)
	    {
		    result.push_back(strSoFar);
		    return;
	    }
	    else if (o <= c)
	    {
		    strSoFar.push_back('(');
		    generateParenthesis(strSoFar, result, o - 1, c);
		    strSoFar.pop_back();
	
		    strSoFar.push_back(')');
		    generateParenthesis(strSoFar, result, o, c - 1);
		    strSoFar.pop_back();
	    }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
	    int o = n, c = n;
	    string strSoFar = "";
	    generateParenthesis(strSoFar, result, o, c);	
	    return result;
    }
};
