HEADERS = \
	analysis.hpp \
	primitives.hpp \
	integration.hpp \
	polynomial.hpp \
	product.hpp \
	functions.hpp

.PHONY: all clean

all: analysis

analysis: main.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

clean:
	$(RM) analysis
