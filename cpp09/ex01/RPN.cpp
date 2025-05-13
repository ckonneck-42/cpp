#include "RPN.hpp"

bool isOperator(const std::string& token)
{
	if (token == "+" || token == "-" || token == "*" || token == "/")
    	return true;
	return false;
}

int applyOperator(const std::string& op, int a, int b)
{
    if (op == "+")
		return a + b;
    if (op == "-")
		return a - b;
    if (op == "*")
		return a * b;
    if (op == "/")
		return a / b;
    return 0;
}

int rpnCalc(const std::string &line)
{
    std::istringstream stream(line);
    std::stack<int> stack;
    std::string token;

    while (stream >> token)
	{
        if (isOperator(token))
		{
            if (stack.size() < 2)
			{
                std::cout << "Error: not enough numbers in stack." << std::endl;
                return 0;
            }
            int b = stack.top();
			stack.pop();
            int a = stack.top();
			stack.pop();
            int result = applyOperator(token, a, b);
            stack.push(result);
        }
		else
            stack.push(std::atoi(token.c_str()));
    }

    if (stack.size() != 1)
	{
        std::cout << "Error: invalid RPN expression." << std::endl;
        return 0;
    }

    return stack.top();
}