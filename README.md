<style>
    .title {
        font-size: 28px;
        font-weight: bold;
        color: #2c3e50;
    }
    .subtitle {
        font-size: 20px;
        font-weight: bold;
        color: #2980b9;
        margin-top: 20px;
    }
    .content {
        font-size: 16px;
        color: #333;
        line-height: 1.6;
    }
</style>

<div class="title">🎯 Algorithm Task for College</div>

<div class="subtitle">📌 Overview</div>
<div class="content">
This project solves the problem of finding the <strong>absolute difference</strong> between the sums of the two diagonals of a square matrix (n × n).<br>
Two implementations are provided: an <strong>iterative approach</strong> and a <strong>recursive approach</strong>.
</div>

<div class="subtitle">🧠 Key Features</div>
<div class="content">
- Written in C++<br>
- Clean and structured code<br>
- Pseudocode provided<br>
- Well-documented with performance analysis
</div>

<div class="subtitle">🆚 Comparison</div>
<div class="content">
<strong>Memory Usage:</strong><br>
Both approaches store the matrix using O(n²) space. However, the recursive version uses an additional O(n) stack space for function calls.<br>
👉 The better option in terms of memory efficiency is: <strong>Iterative approach</strong>.

<br><br>
<strong>Clarity:</strong><br>
The iterative version is easier to understand and maintain.<br>
Recursive logic can be elegant but harder to trace or debug.

<br><br>
<strong>Performance:</strong><br>
Iterative is slightly faster due to lack of recursion overhead.<br>
Recursive adds stack call overhead.

<br><br>
<strong>Maintainability:</strong><br>
Iterative is more straightforward and easier to modify.
</div>

<div class="subtitle">📄 Files Included</div>
<div class="content">
- <code>main (1).cpp</code>: Iterative version<br>
- <code>main (2).cpp</code>: Recursive version<br>
- <code>Algorithms_Task_2025_Documentation.docx</code>: Full documentation with pseudocode and analysis
</div>

<div class="subtitle">📚 Pseudocode</div>
<div class="content">
Available for both iterative and recursive methods in the documentation file.
</div>

<div class="subtitle">📥 How to Run</div>
<div class="content">
Compile using any C++ compiler:<br>

<pre><code>g++ main.cpp -o diagonal_diff
./diagonal_diff</code></pre>
</div>
