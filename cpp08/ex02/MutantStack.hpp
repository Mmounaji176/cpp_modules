#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) : std::stack<T>()
        {
            return ;
        }
        MutantStack(const MutantStack &src) : std::stack<T>(src)
        {
            return ;
        }
        ~MutantStack(void)
        {
            return ;
        }
        MutantStack &operator=(const MutantStack &rhs)
        {
            if (this != &rhs)
                std::stack<T>::operator=(rhs);
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void)
        {
            return (std::stack<T>::c.begin());
        }
        iterator end(void)
        {
            return (std::stack<T>::c.end());
        }
};

#endif