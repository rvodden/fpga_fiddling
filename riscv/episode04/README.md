RISC V - Step 1

We establish a trio of registers, and instruction decoder which can only decode one instruction, an ALU which can only add registers together, and a statemachine. We glue then together into an extremely bare bones single cycle processor.

Step 2

We add the `ADDI` instruction which adds an immediate value (i.e.  a constant) to a register and stores it.

Step 3

Using our ADD and ADDI instructions, we add the NOP and MV instructions as well as a partial implemtation of the LI instruction.

Step 4

We complete the first iteration of our ALU by adding the remaining arithmetic functions.
