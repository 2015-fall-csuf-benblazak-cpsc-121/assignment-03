 /* ----------------------------------------------------------------------------
   * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
   * Released under the [MIT License] (http://opensource.org/licenses/MIT)
   * ------------------------------------------------------------------------- */

  /**
   * A short program to print "Hello World!" to standard output.
   */
   
   /**
 * A function to draw the `Shape`s in `s` in a terminal.
 *
 * Arguments:
 * - `count`: The number of `Shape`s in `s`.
 * - `s`: An array containing pointers to each `Shape` to draw.
 *
 * Notes:
 * - A terminal window is typically 80 columns wide by 25 lines high.
 * - The width:height aspect ratio of a terminal character is approximately
 *   1:1.9.
 */
void draw(const int count, const Shape * const s[]);

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
