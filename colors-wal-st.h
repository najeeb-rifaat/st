const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#020202", /* black   */
  [1] = "#B16E3D", /* red     */
  [2] = "#70C052", /* green   */
  [3] = "#D3A75B", /* yellow  */
  [4] = "#277093", /* blue    */
  [5] = "#2FB0DE", /* magenta */
  [6] = "#9E9F9C", /* cyan    */
  [7] = "#dedede", /* white   */

  /* 8 bright colors */
  [8]  = "#9b9b9b",  /* black   */
  [9]  = "#B16E3D",  /* red     */
  [10] = "#70C052", /* green   */
  [11] = "#D3A75B", /* yellow  */
  [12] = "#277093", /* blue    */
  [13] = "#2FB0DE", /* magenta */
  [14] = "#9E9F9C", /* cyan    */
  [15] = "#dedede", /* white   */

  /* special colors */
  [256] = "#020202", /* background */
  [257] = "#dedede", /* foreground */
  [258] = "#dedede",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
