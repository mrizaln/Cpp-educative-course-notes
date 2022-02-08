#include "imagelib.h" // <== library na can aya hmm

int main() {
  // Displays input image
  loadFile("input.png");

  for (int h = 0; h < height; h++){
    for (int w = 0; w < width; w++){
      if (image[h][w] < 70){ image[h][w] = 0; }
      else { image[h][w] = 255; }
    }
  }

  // Displays modified image
  saveFile("output/modified.png");
}