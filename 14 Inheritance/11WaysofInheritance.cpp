/*
how to derive a class from base class
there are 3 methods of inheritance that are publicaly,privately,protectedly
class Parent 
having private, protected, public
class Child:protected Parent
then everything will be saved in protected means public and protected will be saved in protected
class Grandchild:public Child
here everything will be saved in protected only, despite of writing public as public of parent class is empty

example
i have designed a car and your company have borrowed the design from me
and further you can just access protected and public only but you cant access private
and further you are selling my design to another company
now if you sell it and taken privately from me , that company will not have access to anything, but they can add extensions
now if you sell it and taken publicaly from me, then this company can access everything 
now if you sell it and taken protectedly from me, then this company can access everything but further it is restricted

*/