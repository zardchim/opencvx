/** @file */
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
#ifndef CV_INTER_NN_INCLUDED
#define CV_INTER_NN_INCLUDED

#include "cv.h"
#include "cvaux.h"
#include "cxcore.h"

/**
 * Nearest Neighbor Interpolation
 *
 * Get a color at a floating position using nearest neighbor (round) method.
 *
 * @param  arr     array
 * @param  pt      position
 * @return color
 * @see cvInterLinear
 */
CVAPI(CvScalar) cvInterNn( const CvArr *arr, 
                               CvPoint2D32f pt )
{
    IplImage* img, imgstub;
    int ix, iy;
    CvScalar color;
    CV_FUNCNAME( "cvInterNn" );
    __BEGIN__;
    img = (IplImage*)arr;
    if( !CV_IS_IMAGE(img) )
    {
        CV_CALL( img = cvGetImage( img, &imgstub ) );
    }
    ix = cvRound( pt.x );
    iy = cvRound( pt.y );
    color = cvGet2D( img, iy, ix );
    __END__;
    return color;
}


#endif
