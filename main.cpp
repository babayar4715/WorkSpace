#include <iostream>

int main() {
    int examScore, projectScore, attendance;
    std::cout << "Enter your exam score (0-100): ";
    std::cin >> examScore;
    std::cout << "Enter your project score (0-100): ";
    std::cin >> projectScore;
    std::cout << "Enter your attendance rate (0-100): ";
    std::cin >> attendance;

    int finalScore = (examScore * 0.6) + (projectScore * 0.3) + (attendance * 0.1); // Weighted average
    bool meetsMinimum = (examScore > 50) && (projectScore > 50) && (attendance > 75); // Logical AND operator
    int passThreshold = 60 | (attendance / 10); // Bitwise OR to slightly boost threshold

    std::cout << "Final Score: " << finalScore << "\n";

    if (finalScore >= passThreshold && meetsMinimum) {
        std::cout << "Result: Pass\n";

        if (finalScore >= 90) {
            std::cout << "Grade: A (Outstanding!)\n";
        } else if (finalScore >= 80) {
            std::cout << "Grade: B (Very Good!)\n";
        } else if (finalScore >= 70) {
            std::cout << "Grade: C (Good, but could improve)\n";
        } else {
            std::cout << "Grade: D (Barely passed, needs improvement)\n";
        }

        // Using bitwise AND to check if the score is even or odd
        if (finalScore & 1) {
            std::cout << "Fun fact: Your score is an ODD number!\n";
        } else {
            std::cout << "Fun fact: Your score is an EVEN number!\n";
        }

    } else {
        std::cout << "Result: Fail\n";
        std::cout << "You must improve your scores and attendance.\n";

        // Ternary operator for quick feedback
        std::cout << ((examScore < 50) ? "Your exam score was too low.\n" : "Your exam score was decent.\n");
        std::cout << ((projectScore < 50) ? "Your project needs more effort.\n" : "Your project score was acceptable.\n");
        std::cout << ((attendance < 75) ? "Your attendance was too low!\n" : "Your attendance was fine.\n");
    }

    return 0;
}