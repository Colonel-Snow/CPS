C++ to PostScript
Shape.h
- Base class for all other shapes.
Basic Shapes 
circle.h, polygon.h, rectangle.h, square.h, spacer.h, triangle.h
- All are derived from the shapes class
Compound Shapes
rotated.h
- Derived from shape class. Takes a shape and rotates it by 90, 180, 270, or 360 degrees.
scaled.h
- Derived from shape class. Takes a shape and scales the x and y axis by the scaling factors passed to the constructor.
layred.h
- Derived from shape class. Can take multiple shapes as a parameter and prints them all at the same point.
vertical.h
- Derived from shape class. Can take multiple shapes as a parameter and prints them with the bounding boxes stack
on top of each other.
horizontal.h
- Derived from shape class. Can take mutiple shapes as a parameter and prints each shape to the right of the previous one
with their center points all horizontally aligned.
