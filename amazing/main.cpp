//
//  main.cpp
//  amazing
//
//  Created by Jeremy Greer on 5/13/17.
//  Copyright © 2017 Grizzle. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
  std::cout << "This will be Amazing." << std::endl;
  /*
   * Given a multi-dimensional array representing a path in a grid,
   * print the path.
   */
  int array[5][5] =
  {
    { 0, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 0, 0, 1, 0 },
    { 0, 1, 1, 1, 0 },
    { 0, 1, 0, 0, 0 },
  };

  for (int row = 0; row < 5; row++)
  {
    for (int column = 0; column < 5; column++)
    {
      int cell = array[row][column];
      std::cout << (cell == 1 ? "*" : " ");
    }
    std::cout << std::endl;
  }
  return 0;
}
