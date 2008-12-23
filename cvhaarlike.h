/** @file 
 * Haar-like features
 *
 * You need to set include path to opencvx/HaarTraining such as
 * g++ -Iopencvx/HaarTraining
 **/
/* The MIT License
* 
* Copyright (c) 2008, Naotoshi Seo <sonots(at)sonots.com>
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#ifndef CV_HAARLIKE_INCLUDED
#define CV_HAARLIKE_INCLUDED

#include "cv.h"
#include "cvaux.h"
#include "cxcore.h"

// cvIntegral( img, sum )
// CvIntHaarFeatures* haar = icvCreateIntHaarFeatures( cvGetSize(sum), 0, 0 );

#include "HaarTraining/cvhaartraining.h"
#include "HaarTraining/cvhaartraining.cpp"
#include "HaarTraining/cvboost.cpp"
#include "HaarTraining/cvhaarclassifier.cpp"
#include "HaarTraining/cvcommon.cpp"
#include "HaarTraining/cvsamples.cpp"

#endif