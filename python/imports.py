# modules, packages, libraries

# modules (python modules)
# This is simply a python file that you can use in your current python file to organize your code better

import module

s = module.add(1, 2)
print(s)

# packages (python packages)
# This is simply a collection of python files that you can use your current python file to get access to a collection of modules

# Task: Create a package called house (has to be in the current directory), which will contain modules like color, clean, decorate

# from house import *

# clean.execute()

# color.execute()

# decorate.execute()

# libraries (python libraries)
# This is simply a collection of python packages

from build import house, pool

house.clean.execute()

house.color.execute()

house.decorate.execute()

pool.clean.execute()

pool.fillup.execute()

# This is a bit deeper access than the previous import (package level access)
from build.house import *

clean.execute()

# Easter EGG (find out how it's working)
# import build.house as house_pkg
# house_pkg.clean.execute()