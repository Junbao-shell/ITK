///////////////////////////////////////////////////////////
/// @copyright copyright description
/// 
/// @brief itk hello demo
/// 
/// @file hello_itk.cpp
/// 
/// @author author
/// 
/// @date 2022-04-20
///////////////////////////////////////////////////////////

// Current Cpp header
#include "itkImage.h"
// System header
// C/C++ standard library header
#include <iostream>
// External library header
// Current module header
// Root directory header

int main()
{
    using ImageType = itk::Image<unsigned short, 3>;

    ImageType::Pointer image = ImageType::New();

    std::cout << "hello itk" << std::endl;

    return 0;
}

