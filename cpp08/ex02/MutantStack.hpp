#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

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
        typedef typename std::stack<T>::container_type::iterator _iterator;
        _iterator begin(void)
        {
            return (std::stack<T>::c.begin());
        }
        _iterator end(void)
        {
            return (std::stack<T>::c.end());
        }
};