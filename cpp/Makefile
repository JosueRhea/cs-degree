CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic

TARGETS = build/if-then build/if-then-2 build/switch-case build/atm-example build/exchange-rate-switch
SOURCES = if-then.cpp if-then-2.cpp switch-case.cpp atm-example.cpp exchange-rate-switch.cpp

.PHONY: all clean

all: $(TARGETS)

build/%: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf build
