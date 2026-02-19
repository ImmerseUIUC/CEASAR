# Porting Decision Tree

## Root Question
Can CEASAR be ported with acceptable risk on current Unity baseline?

## Branches
1. If current Unity + package stack supports target platform(s), proceed with incremental adaptation.
2. If current stack is incompatible but can be upgraded safely, plan phased upgrade first, then port.
3. If upgrade cost/risk is too high, consider partial rewrite of platform-coupled layers.
