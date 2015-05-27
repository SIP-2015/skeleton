#!/bin/bash

echo Installing Google Test...
wget http://googletest.googlecode.com/files/gtest-1.7.0.zip
unzip gtest-1.7.0.zip
rm gtest-1.7.0.zip
cd gtest-1.7.0
echo Configuring Google Test...
./configure
make
echo Copying binaries to include...
sudo cp -a include/gtest /usr/include/
sudo cp -a lib/.libs/* /usr/lib/
echo Cleaning up...
cd ..
rm -r gtest-1.7.0

cat > testf.cpp <<- EOM
#include "gtest/gtest.h"

namespace {
    class testf : public ::testing::Test {
    protected:
        testf() { }
        virtual ~testf() { }
        virtual void SetUp() { } 
        virtual void TearDown() { }
    };

    TEST_F(testf, add) {
        ASSERT_EQ(13, 3 + 10);
    }
}

int main(int argc, char ** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
EOM

EXPECTED="[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from testf
[ RUN      ] testf.add
[       OK ] testf.add (0 ms)
[----------] 1 test from testf (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (0 ms total)
[  PASSED  ] 1 test."

g++ -std=c++11 -Wall testf.cpp -lgtest -pthread -lgtest_main -o testf
if [ -e testf ]; then
    OUTPUT=$(./testf)
    if [ "$OUTPUT" == "$EXPECTED" ]; then
        echo "Google Test successfully installed."
    else
        echo -e "Google Test encountered a runtime error:\n$OUTPUT"
    fi
else
    echo "Google Test was not properly installed."
fi
rm testf*
