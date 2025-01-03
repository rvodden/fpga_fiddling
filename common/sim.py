import numpy as np
import matplotlib.pyplot as plt
import sys

import PySpice
import PySpice.Logging.Logging as Logging

from PySpice.Spice.Netlist import Circuit
from PySpice.Unit import *

#if sys.platform in ["linux", "linux2"]:
#   PySpice.Spice.Simulation.CircuitSimulator.DEFAULT_SIMULATOR = 'ngspice-subprocess'

Logging.setup_logging(application_name='PySpice', logging_level="DEBUG")

circuit = Circuit("Voltage Divider")

circuit.V('input', 'input', circuit.gnd, 10@u_V)
circuit.R('1', 'input', 'out', 9@u_kOhm);
circuit.R('2', 'output', circuit.gnd, 1@u_kOhm)

simulator = circuit.simulator(temperature=25, nominal_temperature=25)

print("The circuit netlist:\n\n", circuit);

analysis = simulator.operating_point()

print(analysis)
print(analysis.nodes['input'])
print(analysis.nodes['output'])
print(float(analysis.nodes['output']))