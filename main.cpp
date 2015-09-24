/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
*                  2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

  /**
   * A short program to print "Hello World!" to standard output.
   */


int main() {
    // declare constants for the number of frames to draw and the
    // amount of time to sleep after drawing each frame

    // for each frame

        // create some shapes (with values depending on the current frame
        // number)

        // put pointers to them in an array
        //
        // for example, given a `Rectangle r` and a `Square s`:
        Shape * shapes[] = { &r, &s, };
        // this is possible because `Rectangle`s and `Squares`, and all
        // your other shapes, inherit from `Shape`

        // draw the shapes in the terminal
        //
        // for example, given the `shapes` array above:
        draw( sizeof(shapes) / sizeof(Shape *), shapes );

        // wait before drawing the next frame
        //
        // for example:
        std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep));
        // if you'd like to know more about what this line is doing, look
        // up the documentation for `std::this_thread::sleep_for` and
        // `std::chrono::milliseconds()`.

    return 0;  // success
}

