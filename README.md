#  C++ EXPERIMENTS
A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

##  Student Information
- **Name:** Dev Darji
- **PRN:** 24070123033 
- **Branch:** ENTC  
- **Class:** A-2 

---

##  Experiment 08 – Matrix Operations in C++

###  Aim
To write a C++ program to input two matrices from the user, display them, and perform their addition if dimensions match.

---

###  Theory
- A matrix is a rectangular arrangement of elements in rows and columns.  
- In C++, matrices can be implemented using **2D arrays** or **vectors**.  
- Matrix addition is only possible when both matrices have the **same dimensions**.  
- If two matrices A and B are both of size `m × n`, their sum C is given by:  

---

###  Algorithm
1. Start the program.  
2. Input the number of rows and columns for **Matrix 1**.  
3. Input the number of rows and columns for **Matrix 2**.  
4. Check if the dimensions of both matrices are equal.  
5. If not equal, display a message and exit.  
6. Declare two **2D arrays** to store the matrices.  
7. Input all elements of **Matrix 1** row by row.  
8. Input all elements of **Matrix 2** row by row.  
9. Create a **2D array for the Sum Matrix**.  
10. For each position `(i, j)`, calculate:  
   `Sum[i][j] = Matrix1[i][j] + Matrix2[i][j]`  
11. Display **Matrix 1**.  
12. Display **Matrix 2**.  
13. Display the **Sum Matrix**.  
14. End the program.  

---

