#!/usr/bin/env python

binary = [
# integer operations
    'add_addition',
    'add_subtraction',
    'add_multiplication',
    'add_division',
# binary logical operations
    'add_conjunction',
    'add_disjunction',
    'add_implication',
# binary relational operations
    'add_equality',
    'add_greater_than',
    'add_less_than',
# binary set operations
    'add_union',
    'add_intersection',
    'add_difference',
]

unary = [
# unary arithmetic operations
    'add_negative',
# unary logical operations
    'add_negation',
# unary composite operations
    'add_sum',
    'add_generalized_and',
    'add_generalized_or',
]
binary_template = ''
with open ("binary_reference.txt", "r") as myfile:
    binary_template=myfile.read()

unary_template =  ''
with open ("unary_reference.txt", "r") as myfile:
    unary_template=myfile.read()

for op in binary:
    print binary_template.replace("{{COMMAND}}", op)


for op in unary:
    print unary_template.replace("{{COMMAND}}", op)