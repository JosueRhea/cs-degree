set -xe

mkdir -p build

g++ -o build/if-then if-then.cpp
g++ -o build/if-then-2 if-then-2.cpp
g++ -o build/switch-case switch-case.cpp
g++ -o build/atm-example atm-example.cpp
