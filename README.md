SETTING OBJECTIVES 

Create a software product for working with two-dimensional polygons. Designing includes a description of the classes that are necessary for the implementation of the required functionality (obviously, in addition to the "polygon" class, at least a point "point" will be required).

 FUNCTIONALITY 

    Adding polygons: the result is a new polygon;
    Subtracting polygons: the result is a new polygon;
    Clone a polygon: the result is a new polygon object that has exactly the same parameters'
    Scaling polygons: the result is a "stretched" or "compressed" polygon relative to the center of mass;
    Scaling polygons with cloning: the result is a "stretched" or "compressed" polygon relative to the center of mass;
    Moving the polygon: the result is a polygon displaced by certain values n X and Y;
    Carrying out with the cloning of a polygon: the result is a polygon displaced by certain values in X and Y.

PRODUCT FEATURES 

   The polygon is built on the basis of an array of lines.
   The polygon is displayed on the coordinate plane created, according to the found center of the console. Console commands are    used for easier application.
 

 
LIST OF COMMANDS

    "--p new" - creation of a polygon;
    "--p move_x" - offset by X;
    "--p move_y" - offset by Y;
    "--p move_point" - offset by X and Y;
    "--p zoom" - zoom;
    "--c draw" - mapping on the coordinate plane.
 
 INSTRUCTION FOR USE
 
    After launching the program, by entering the "help" command, we review the available commands and how to use them. NOTE:         Enter precisely to the characters!
    When typing "--p new" you need to enter the number of vertices of the created polygon, and enter their coordinates               respectively as x1, y1, then x2, y2, etc. to xn, yn, where n is the number of vertices.
    Next, enter the necessary commands.
    "--p move_x" and "--p move_y" enter the offset number.
    "--p move_point" enter the displacement coordinates (pair of numbers).

LIST OF PARTICIPANTS

  Arrius - polygon, line, point, devide and menu, draw.
  
  Jullia - operator +, operator + =.
  
  hajkahajka- operator *, operator * =.
  
  Stiven - operator =, menu.
