#include "Span.hpp"

Span::Span(void) : _n(0)
{
    return ;
}

Span::Span(unsigned int n) : _n(n)
{
    this->_v.reserve(n);
    return ;
}

Span::Span(const Span &src)
{
    *this = src;
    return ;
}

Span::~Span(void)
{
    return ;
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_v = rhs._v;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (this->_v.size() < this->_n)
        this->_v.push_back(n);
    else
        throw Span::FullException();
}

int Span::shortestSpan(void)
{
    if (this->_v.size() < 2)
        throw Span::NotEnoughNumbersException();
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < min)
            min = v[i] - v[i - 1];
    }
    return (min);
}

int Span::longestSpan(void)
{
    if (this->_v.size() < 2)
        throw Span::NotEnoughNumbersException();
    int max = *std::max_element(this->numbers.begin(), this->numbers.end());
	int min = *std::min_element(this->numbers.begin(), this->numbers.end());
	return (std::abs(max - min));
}

void    Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_v.size() + std::distance(begin, end) > this->_n)
        throw Span::FullException();
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}

const char *Span::FullException::what() const throw()
{
    return ("Span is full");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("Not enough numbers in Span");
}