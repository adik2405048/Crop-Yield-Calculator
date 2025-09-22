#include <stdio.h>

int main() {
    // Declare variables to store user input and results.
    // আমরা ইনপুট এবং ফলাফল সংরক্ষণের জন্য ভেরিয়েবল ঘোষণা করছি।
    float length, width, area, yield_per_unit, total_yield;

    // --- User Input ---
    // ব্যবহারকারীর কাছ থেকে জমির দৈর্ঘ্য ও প্রস্থ ইনপুট নেওয়া হচ্ছে।
    printf("জমির দৈর্ঘ্য (মিটারে) লিখুন: ");
    scanf("%f", &length);

    printf("জমির প্রস্থ (মিটারে) লিখুন: ");
    scanf("%f", &width);

    printf("প্রতি বর্গমিটারে ফলন (কেজি) লিখুন: ");
    scanf("%f", &yield_per_unit);

    // --- Calculation ---
    // ক্ষেত্রফল এবং মোট ফলন গণনা করা হচ্ছে।
    area = length * width;
    total_yield = area * yield_per_unit;

    // --- Output ---
    // ফলাফল প্রদর্শন করা হচ্ছে।
    printf("\n--- হিসাবের ফলাফল ---\n");
    printf("জমির মোট ক্ষেত্রফল: %.2f বর্গমিটার\n", area);
    printf("এই জমিতে মোট সম্ভাব্য ফলন: %.2f কেজি\n", total_yield);

    return 0; // Indicates successful execution.
}
