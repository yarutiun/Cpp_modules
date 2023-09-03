#include <iostream>
#include <stack>

void checkStack(std::stack<int> _stack)
{
    while (!_stack.empty())
    {
        std::cout << _stack.top() << std::endl;
        _stack.pop();
    }
}

int performOperation(char op, int a, int b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0; 
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        std::stack<int> _stack;
        int i = 0;
        int a;
        int b;
        while(argv[1][i])
        {
            if(argv[1][i] == ' ')
                i++;
            else if((argv[1][i] >= '0' && argv[1][i] <= '9') && argv[1][i+1] && argv[1][i+1] != ' ')
            {
                std::cout << "ERROR" << std::endl;
                return(1);
            }
            else if((argv[1][i] >= '0' && argv[1][i] <= '9'))
            {
                _stack.push((argv[1][i] - '0'));
                i++;
            }
            else if(performOperation(argv[1][i], 2, 1) && argv[1][i] && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\0'))
            {
                b = _stack.top();
                _stack.pop();
                a = _stack.top();
                _stack.pop();
                _stack.push(performOperation(argv[1][i], a, b));
                i++;
            }
            else
            {
                std::cout << "ERROR" << std::endl;
                return(1);
            }
        }
        checkStack(_stack);
        return(0);
    }
    std::cout << "your input is wrong" << std::endl;
    return(1);
}