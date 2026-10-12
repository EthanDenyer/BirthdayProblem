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

# What do the results show?

The simulation placed 23 people in each of 10,000 rooms, gave everyone a random birthday, and counted how many rooms contained at least two people who shared one. Just over half the rooms had a match.

With 365 possible birthdays, the common instinct is that you'd need a room of around 183 people before a match became likely. The reason so few are needed is that a match can happen between any two people in the room, not just between you and someone else. With 23 people there are 253 different pairs, and every pair is another chance of a shared birthday.

The result also matched the well-known answer for the birthday problem, which gives confidence that the simulation works as intended. Running it with larger rooms shows how quickly the chance climbs: by 50 people a shared birthday is
almost guaranteed.

# How was this made?

This was my first ever C++ project and I coded it in around four hours. It was designed as a way to visualise the Birthday problem and add to my Cryptanalysis portfolio. I used ClaudeCode to refine the boolean logic controlling the example-room display and to help scale the simulation across 10,000 rooms, giving the output a more polished presentation and demonstrating the result at larger scale. I wrote the birthday-generation and collision-detection logic myself; building that core helped me understand how the problem works, so I used AI to save time on scaling up the simulation. The boolean logic could help someone understand how the code works, but I didn’t need it for my own debugging because I had already used debug statements to test the same conditions. I chose not to spend extra time adding a separate display feature and this was the other Claude generated element.
