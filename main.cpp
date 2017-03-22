//
//  main.cpp
//  OpenCVTest
//
//  Created by Elviss Strazdins on 26/08/15.
//  Copyright (c) 2015 Elviss Strazdins. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, const char * argv[])
{
    VideoCapture cap(1);
    
    if (!cap.isOpened())
    {
        return 1;
    }
    
    bool quit = false;
    
    while (!quit)
    {
        Mat frame;
        
        if (!cap.read(frame))
        {
            cout << "Could not get frame\n";
            break;
        }
        
        imshow("Test", frame);
        
        int key = waitKey(30);
        
        if (key == 27)
        {
            quit = true;
        }
    }
    
    return 0;
}
