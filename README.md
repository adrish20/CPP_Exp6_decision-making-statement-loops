<h1>Aim</h1>
<p>To study and implement C++ decision making statements loops</p>
<hr>
<h1>Software Used</h1>
<p>VS code</p>
<hr>
<h1>Theory</h1>
<p>In C++, loops are control structures which allow the block of code to be repeated so that the statement or group of statements can be executed one or more times. The `for` loop uses a counter that specifies the number of times it is to be used, `while` loop runs until the condition is met and `do-while` loop, which runs the block at least once before testing the condition. These looping structures are also useful to allow code to be as automated as possible which is more optimized compared to having to write out the same processes repeatedly.</p>
<hr>
<h1>Algorithms</h1>
<h2>Password Authenticator</h2>
<ol>
  <li>Start.</li>
  <li>Initialise 'pwd' with 8761. This is the correct password.</li>
  <li>Declare variable 'u_pwd' to store user input.</li>
  <li>Display message "Enter password: " and store user input in 'u_pwd'.</li>
  <li>Run while loop with condition (pwd>0)
  <ul>
    <li>If 'u_pwd' is not equal to 'pwd':
    <ul>
      <li>Display the message "Password is incorrect".</li>
      <li>Display the message "Enter password again: ".</li>
      <li>Accept the input from the user again and store it in 'u_pwd'.</li>
    </ul>
    </li>
    <li>Else:
    <ul>
      <li>Display the message "Password is correct".</li>
      <li>Break the loop.</li>
    </ul>
    </li>
  </ul>
  </li>
  <li>End.</li>
</ol>
<h2>Half Pyramid</h2>
<ol>
  <li>Start.</li>
  <li>Declare two variables 'i' and 'j' to use as loop counters.</li>
  <li>Outer for loop begins:
  <ul>
    <li>Initialize 'i' to 1.</li>
    <li>Condition: Loop runs as long as 'i' is less than or equal to 5.</li>
    <li>Increment 'i' by 1 after each iteration.</li>
  </ul>
  </li>
  <li>Inner for loop(nested) begins:
  <ul>
    <li>Initialize 'j' to 1.</li>
    <li>Condition: Loop runs as long as 'j' is less than or equal to 'i'.</li>
    <li>Increment 'j' by 1 after each iteration.</li>
    <li>Inside inner loop:
    <ul>
      <li>Display "* " (a star followed by a space) on the same line.</li>
    </ul>
    </li>
  </ul>
  </li>
  <li>After exiting the inner loop, move to the next line by displaying endl.</li>
  <li>Repeat the outer loop until 'i' exceeds 5.</li>
  <li>End.</li>
</ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, it is possible to state that decision-making statements and loops are significant for C++ application development to build more adjustable and productive programs.</p>
