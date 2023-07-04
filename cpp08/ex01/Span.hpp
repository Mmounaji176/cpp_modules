#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span &src);
        ~Span(void);
        Span &operator=(const Span &rhs);

        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

        class FullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class  NotEnoughNumbersException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif