/*****************************************************************************
*   ExploringSfMWithOpenCV
******************************************************************************
*   by Roy Shilkrot, 5th Dec 2012
*   http://www.morethantechnical.com/
******************************************************************************
*   Ch4 of the book "Mastering OpenCV with Practical Computer Vision Projects"
*   Copyright Packt Publishing 2012.
*   http://www.packtpub.com/cool-projects-with-opencv/book
*****************************************************************************/

#pragma once

//#define STRATEGY_USE_OPTICAL_FLOW		1
//#define STRATEGY_USE_DENSE_OF			2
//#define STRATEGY_USE_FEATURE_MATCH		4
//#define STRATEGY_USE_HORIZ_DISPARITY	8

class IDistance {
public:
	virtual void OnlyMatchFeatures() = 0;
	virtual bool RecoverDepthFromImages() = 0;
	virtual std::vector<cv::Point3d> getPointCloud()	const = 0;
	virtual std::vector<cv::Vec3b>	 getPointCloudRGB() const = 0;
};
