# 🤖 Logic and Algorithms: College - Short Semester Classes (SP) Management System

This repository contains a C++ implementation designed to manage student registration and tuition fees for short-semester classes. Built as part of the Algorithm & Programming course evaluation, this project highlights fundamental programming techniques including structured array management, conditional control flows, iterative loops, and I/O buffering.

---

## 📌 Project Overview & Features

- **Student Credentials Validation:** Captures multi-word student names using `getline()` and handles alphanumeric IDs (NIM).
- **Dynamic Array Allocation:** Stores user-defined course lists and associated credit units (SKS) into static array buffers.
- **Iterative Data Processing:** Utilizes `for` loops for step-by-step inputs and detailed invoice generation.
- **Conditional Discount Logic:** Implements `if/else` checks to grant a 10% tuition discount for students registering 6 or more SKS.

---

## 🛠️ Course Syllabus Coverage

1. **Variables & Data Types:** String (`string`), Integer (`int`), Long Integer (`long`), Double Precision Float (`double`).
2. **Standard I/O:** `cout`, `cin`, `getline()`, and `cin.ignore()` for buffer clearing.
3. **Data Structures:** Fixed-length Arrays for course tracking (`selectedCourseNames[]`, `selectedCourseSKS[]`).
4. **Iterative Loops:** `for` loop construct for collecting multi-item data and list rendering.
5. **Control Flows:** `if/else` conditional logic for calculating fee discounts.

---

## 📊 Program Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Input studentName, studentNIM, totalCourses]
    B --> C[Set totalSKS = 0, i = 0]
    C --> D{i < totalCourses?}
    D -- Ya --> E[Input nama matkul dan SKS ke-i]
    E --> F[Accumulate totalSKS dengan SKS baru]
    F --> G[i = i + 1]
    G --> D
    D -- Tidak --> H[Hitung subtotal = totalSKS * 150000]
    H --> I{totalSKS >= 6?}
    I -- Ya --> J[discountPercentage = 0.10]
    I -- Tidak --> K[discountPercentage = 0.0]
    J --> L[Hitung discountAmount & grandTotal]
    K --> L
    L --> M[Cetak Kuitansi & Detail Matkul]
    M --> N([End])
```

---

## 🚀 How to Run Locally

### Prerequisites

Make sure you have a C++ compiler installed (such as GCC/G++ or MinGW).

### Execution Steps

1. Clone this repository:
    ```
   git clone https://github.com/abdullohmmuttaqin/short-semester-classes.git
   ```

2. Navigate to the project directory:
   ```
   cd short-semester-classes
   ```

3. Compile the C++ program:
    ```
    g++ main.cpp -o main
    ```

4. Run the executable file:
    - On Windows (PowerShell/CMD):
    ```
    .\main.exe
    ```
    - On Linux/macOS:
    ```
    ./main
    ```

---

## 📑 Course & Student Information

| Field | Details |
| :--- | :--- |
| **Course** | Algoritma & Pemrograman II |
| **Lecturer** | Tri Anggoro, M.Kom. |
| **Student Name** | Abdullah Muhammad Muttaqim |
| **Student ID (NIM)** | 22EO10034 |
| **Class/Semester** | IF 8 B (Semester Pendek TA 2025/2026) |
| **Major/Faculty** | Informatika/FMIKOM |
| **Institution** | Universitas Nahdlatul Ulama Al Ghazali Cilacap |