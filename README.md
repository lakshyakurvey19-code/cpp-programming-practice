# C++ Programming Practice

A structured repository of fundamental to intermediate C++ practice programs organized logically by concept and learning progression.

---

## 📚 Learning Progression

The programs are organized in sequential learning folders, each containing numbered programs starting from `001.cpp` ordered from simpler to more complex concepts:

```
C++/
├── 01_Basics/
│   ├── 001.cpp -> ASCII Value Extraction
│   ├── 002.cpp -> Full Name String I/O
│   ├── 003.cpp -> Celsius to Fahrenheit Conversion
│   ├── 004.cpp -> Circle Area Calculation
│   ├── 005.cpp -> Circle Area & Circumference
│   ├── 006.cpp -> Simple Interest Formula
│   ├── 007.cpp -> 5 Subject Marks Sum & Average
│   └── 008.cpp -> Gross Salary Calculation
├── 02_Conditional_Statements/
│   ├── 001.cpp -> Even or Odd Check
│   ├── 002.cpp -> Positive, Negative, or Zero Check
│   ├── 003.cpp -> Voting Eligibility Evaluation
│   ├── 004.cpp -> Alphabet Character Check
│   ├── 005.cpp -> Character Type Classifier
│   ├── 006.cpp -> Vowel or Consonant Check
│   ├── 007.cpp -> Greatest of Three Numbers
│   └── 008.cpp -> Valid Date and Leap Year Verification
├── 03_Loops/
│   ├── 001.cpp -> Print 1 to N Natural Numbers
│   ├── 002.cpp -> Multiplication Table Generator
│   ├── 003.cpp -> Sum of First N Numbers
│   ├── 004.cpp -> Factorial Calculation
│   ├── 005.cpp -> Fibonacci Series Generation
│   ├── 006.cpp -> Number Reversal & Palindrome Check
│   ├── 007.cpp -> Sum of Digits
│   ├── 008.cpp -> Prime Number Validation
│   ├── 009.cpp -> Armstrong Number Verification
│   └── 010.cpp -> Triangle & Pyramid Star Patterns
├── .gitignore
└── README.md
```

---

## 🗂️ Program Index & Original Mapping

### 01. Basics
| Folder | File | Original File | Topic | Description |
| :--- | :--- | :--- | :--- | :--- |
| `01_Basics` | `001.cpp` | `001_ascii_value.cpp` | Type Casting & ASCII | Reads a character and displays its integer ASCII code |
| `01_Basics` | `002.cpp` | `002_abbreviated_name.cpp` | String / Char Array I/O | Reads full name parts and displays the formatted name |
| `01_Basics` | `003.cpp` | `003_celsius_to_fahrenheit.cpp` | Unit Conversion | Converts Celsius temperature to Fahrenheit |
| `01_Basics` | `004.cpp` | `005_area_of_circle.cpp` | Geometric Formulas | Computes the area of a circle from user input radius |
| `01_Basics` | `005.cpp` | `006_area_circumference_circle.cpp` | Geometric Formulas | Computes both the area and circumference of a circle |
| `01_Basics` | `006.cpp` | `007_simple_interest.cpp` | Financial Arithmetic | Calculates simple interest from principal, rate, and time |
| `01_Basics` | `007.cpp` | `004_marks_sum_average.cpp` | Multi-input Arithmetic | Reads marks for 5 subjects, calculates total sum and average |
| `01_Basics` | `008.cpp` | `008_gross_salary.cpp` | Salary Calculation | Calculates gross salary by adding basic, HRA, DA, and allowances |

### 02. Conditional Statements
| Folder | File | Original File | Topic | Description |
| :--- | :--- | :--- | :--- | :--- |
| `02_Conditional_Statements` | `001.cpp` | `010_odd_or_even.cpp` | Parity Check | Checks if an integer is even or odd using modulus `% 2` |
| `02_Conditional_Statements` | `002.cpp` | `009_positive_negative_zero.cpp` | Sign Comparison | Classifies a number as positive, negative, or zero |
| `02_Conditional_Statements` | `003.cpp` | `011_voting_eligibility.cpp` | Age Eligibility | Evaluates whether a person is eligible to vote (>= 18) |
| `02_Conditional_Statements` | `004.cpp` | `012_alphabet_check.cpp` | Range Checking | Determines whether an input character is an alphabet letter |
| `02_Conditional_Statements` | `005.cpp` | `013_char_type_classifier.cpp` | Multi-branch Classifier | Categorizes characters as uppercase, lowercase, digit, or special |
| `02_Conditional_Statements` | `006.cpp` | `014_vowel_or_consonant.cpp` | Compound Conditions | Checks whether an alphabet letter is a vowel or consonant |
| `02_Conditional_Statements` | `007.cpp` | `015_greatest_of_three.cpp` | Relational Logic | Finds the maximum among three numbers |
| `02_Conditional_Statements` | `008.cpp` | `016_valid_date_and_leap_year.cpp` | Nested Conditions & Leap Year | Validates calendar dates including month days and February leap year rules |

### 03. Loops & Iterations
| Folder | File | Topic | Description |
| :--- | :--- | :--- | :--- |
| `03_Loops` | `001.cpp` | Basic `for` Loop | Prints natural numbers from 1 to N |
| `03_Loops` | `002.cpp` | Iterative Output | Generates standard multiplication table for any number |
| `03_Loops` | `003.cpp` | Accumulator Loop | Calculates the sum of first N natural numbers |
| `03_Loops` | `004.cpp` | Product Accumulator | Calculates factorial of a number using iterative loop |
| `03_Loops` | `005.cpp` | Sequence Generation | Generates Fibonacci sequence up to N terms |
| `03_Loops` | `006.cpp` | Number Extraction | Reverses integer digits and verifies if it is a palindrome |
| `03_Loops` | `007.cpp` | Digit Processing | Computes the sum of all digits of a number |
| `03_Loops` | `008.cpp` | Primality Test | Checks if a number is prime using $O(\sqrt{N})$ loop |
| `03_Loops` | `009.cpp` | Math & Power | Verifies if a number is an Armstrong (Narcissistic) number |
| `03_Loops` | `010.cpp` | Nested Loops & Patterns | Prints right-angled triangle and centered star pyramid |

---

## 🛠️ Compilation & Execution

To compile and run any of the programs using `g++`:

```bash
# Compile
g++ 03_Loops/001.cpp -o 001.exe

# Run (Windows)
.\001.exe

# Run (Linux/macOS)
./001
```

---
*Maintained by [@lakshyakurvey19-code](https://github.com/lakshyakurvey19-code)*
