#include "../MarchingSquares.h"
#include "picotest/picotest.h"

namespace {

class MarchingSquaresTest : public ::testing::Test {
    protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    MarchingSquaresTest() {
        // You can do set-up work for each test here.
    }

    virtual ~MarchingSquaresTest() {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

    // Objects declared here can be used by all tests in the test case for Foo.
};

TEST_F(MarchingSquaresTest, HandlesSquareCorrectly) {
    const int width = 4;
    const int height = 4;
    std::vector<unsigned char> data(width * height);
    const auto setPixel = [&data, width, height](int x, int y) {
        data[y * width + x] = 255;
    };
    setPixel(1, 1);
    setPixel(1, 2);
    setPixel(2, 1);
    setPixel(2, 2);

    const auto perimeter = MarchingSquares::FindPerimeter(1, 1, width, height, &data[0]);
    EXPECT_EQ(perimeter.initialX, 1);
    EXPECT_EQ(perimeter.initialY, 1);
    EXPECT_EQ(perimeter.directions.size(), 4);
}

}  // namespace

int main(int argc, char **argv) {
    return RUN_ALL_TESTS();
}