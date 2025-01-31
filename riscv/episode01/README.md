---
marp: true
class: invert
auto-scaling: true
pagniate: true
---
<!--
_class: 
 - invert
 - lead
-->

![bg left:40% 70%](../assets/risc-v.svg)

## Building a RISC-V processor

---
<!-- class: invert -->
In this series we're going to build a RISC-V processor.

It won't be the most efficient processor, but it will work. 

---
<!-- class: invert -->
# Why?

I've always been interested in electronics, and I'm a proffessional software engineer. I've always wondered what happens where the rubber hits the road. When I write some code, what happens to the electrons and the transistors flowing around my CPU. This little journey is me trying to fill that gap in my understanding, and bringing you along the way!

---

 # What?

 We are going to, at least to start with, focussing on the RV32-I Base Integer Instruction set. This is the simplest flavour of RISC-V and will give us an opportunity to build something which will genuinely works - we will be able to write code in C and have it execute on our processor.

---

# Who?

This isn't really an FPGA tutorial, nor is it a Verilog tutorial. It might be a micro-architecture tutorial, but I'm not sure yet. It's aimed for the curious more than anything else. If you know a bit about code, know a bit about electronics, and you're prepared to research the stuff you don't know, then you'll probably find this series interesting.

---

# Hardware & Tools

This entire series can be done with simulators alone, but that is no fun at all. I'm developing using an ICE40kUP FPGA breakout board and an open source toolchain.
I'll do a seperate video on exactly how to get the hardware and the toolchain set up.

The processor itself will be written in Verilog, and I'll keep it as vendor neutral as I can so that hopefully it will be possibly to run through this series with any resonably sized FPGA board.

 ---

# Getting started

We're going to start by implmenting the `add` instruction. With almost no exception, processors have internal memory locations called registers. RV32-I has 33 registers - 32 general purpose registers, and a program counter. All of these registers are 32-bits wide. Our `add` instruction takes the contents of two general purpose registers, adds them up, and saves the result to a register (which can be one of the two original registers). The registers are called `x0`, `x1` etc. up to `x32`. Even though `x0` is a so called general purpose register, its value is hard-wired to zero. Values can be saved to it, but the value is discarded, a bit like `/dev/null`. So:

```
add x1 x2 x3
```

will take the value of x2, add it to the value of x3, and store it to x3.

---

# Instruction Encoding

RV32-I instructions are 32 bits. These 32 bits need to include the source and destination registers as well as the operation itself. Instructions are broken up into types and `add` is an R-Type instruction. The 32 bits of an R-Type instruction consist of:

bits 31-25: `funct7`
bits 24-20: `rs2`
bits 19-15: `rs1`
bits 14-12: `funct3`
bits 11-07: `rd`
bits 06-00: `opcode`

---

The terms used here, such as `funct7` and `opcode` are taken directly from the `RV32-I` specification. The `opcode` describes the kind of instruction we are dealing with, and usually indicates the part of the processor which will execute the instruciton. `funct3` and `funct7` provide 11 bits to describe in more detail which operation is intended to be performed. Our `add x1 x2 x3` instruction would be encoded like this:


bits 31-25: 
bits 24-20 `rs2`
bits 19-15 `rs1`
bits 14-12 `funct3`
bits 11-07 `rd`
bits 06-00 `opcode`
