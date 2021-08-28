# BadTool
Evidently a really bad piece of code from the 1990's used for interviews

## Description

*Note: Taken directly from it's original implementation without changes. The opinions and views stated in the following description do not reflect the repo owner's, and he takes no responsibility for them. We especially do not mean to offend Java developers.*

The Legendary BadTool, used in interviews since the 1990s. It's a terrible piece of code, and doesn't do anything interesting or fun. It's just a bag full of bugs. Most of the concepts in this tool aren't really very complex -- off by one errors, string termination problems, and a few edge cases that get overlooked. Watching someone debug this code, though, gives quite a bit of insight into what kind of a programmer the candidate is and how observant they are. Of course, it also demonstrates whether they have a basic understanding of C. The final part of this exercise delves into heavy use of pointers, including some really *wonky* pointer stuff. There's a conceptual problem, though, dealing with memory on the stack going out of scope. Most candidates eventually spot the problem (some sooner than others) but in fact a surprising number of candidates never quite grasp that the memory of the structure allocated on the stack will be overwritten on the call to subsequent functions. We call those candidates Java programmers.
