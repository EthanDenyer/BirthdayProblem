## BirthdayProblem
An easy, C++ visual demonstration of the Birthday Problem that you can execute in your own window. Used as part of a wider Cryptanalysis portfolio.

# What is the Birthday Problem?
The Birthday Problem asks how many people need to be in a room before there is a good chance that at least two share a birthday. Assuming 365 equally likely birthdays and ignoring leap years, the answer is just 23: the chance of a match is about 50.7%.

This often surprises people. It might seem that 23 people should give a chance of around 23/365, or 6%, but that overlooks how many different pairs of people could share a birthday.

The number of possible birthdays stays at 365, while the number of pairs grows as the group gets larger. Each new person has more previous birthdays they could match. With 23 people, there are 253 possible pairs, giving many opportunities for a match.

# How is this relevant to Cryptanalysis?

This is a submission entry for my Cryptography & Cryptanalysis section of my portfolio. It matters because cryptographic hashes also map inputs into a limited set of outputs. If you hash enough different messages, eventually two may produce the same hash collision. The birthday problem tells us that finding any collision generally takes around the square root of the number of possible outputs and is a logical example which can help solidify understanding. 

A 256-bit hash is generally described as providing about 128 bits of collision resistance due to the same fault emulated by the Birthday Problem. Understanding of hash collisions in randomly generated, but finite, algorithms helps cryptographers choose hash sizes and estimate how much work a collision attack would require.

A collision attack is different from recovering a message from its hash, or finding a message that matches one specific hash. This simulation would help explain the collision case—and show why cryptographic output sizes need to account for the birthday effect, especially to individuals who might be learning about this for the first time. 

# How was this made?

This was my first ever C++ project and I coded it in around four hours. It was designed as a way to visualise the Birthday problem and add to my Cryptanalysis portfolio. I used AI to refine the boolean logic controlling the example-room display and to help scale the simulation across 10,000 rooms, giving the output a more polished presentation and demonstrating the result at larger scale. I wrote the birthday-generation and collision-detection logic myself; building that core helped me understand how the problem works, so I used AI to save time on scaling up the simulation.
