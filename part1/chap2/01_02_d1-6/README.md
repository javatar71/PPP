### Drill
After each step of this drill, run your program to make sure it is really doing what you expect it to.
Keep a list of what mistakes you make so that you can try to avoid those in the future.
1. Write a program that produces a simple form letter based on user input. Begin by typing
the code from §2.1 prompting a user to enter his or her ﬁrst name and writing ‘‘Hello,
ﬁrst_name’’ where ﬁrst_name is the name entered by the user. Then modify your code as
follows: change the prompt to ‘‘Enter the name of the person you want to write to’’ and
change the output to ‘‘Dear ﬁrst_name,’’. Don’t forget the comma.
2. Add an introductory line or two, like ‘‘How are you? I am ﬁne. I miss you.’’ Be sure to
indent the ﬁrst line. Add a few more lines of your choosing – it’s your letter.
3. Now prompt the user for the name of another friend and store it in friend_name. Add a
line to your letter: ‘‘Have you seen friend_name lately?’’
4. Prompt the user to enter the age of the recipient and assign it to an int variable age. Have
your program write ‘‘I hear you just had a birthday and you are age years old.’’ If age is 0
or less or 110 or more, call simple_error("you’re kidding!") using simple_error() from
PPP_support.
5. Add this to your letter:
If your friend is under 12, write ‘‘Next year you will be age+1.’’ If your friend is
17, write ‘‘Next year you will be able to vote.’’ If your friend is over 70, write
‘‘Are you retired?’’
Check your program to make sure it responds appropriately to each kind of value.
6. Add ‘‘Yours sincerely,’’ followed by two blank lines for a signature, followed by your
name.
