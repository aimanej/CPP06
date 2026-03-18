srcs= main.cpp ScalarConverter.cpp

header= ScalarConverter.hpp

Name= convert

all:$(Name)

$(Name) : $(srcs) $(header)
	g++ $(srcs) -o $(Name)

clean:
	rm -rf $(Name)

re:clean all