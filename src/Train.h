#ifndef TRAIN
#define TRAIN

//���ļ��л�ȡͼƬ���ƣ����룬�������д������ʶ��
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <ros/ros.h>

//OpenCV specific includes
#include <opencv2/opencv.hpp>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>

#include <opencv2/nonfree/features2d.hpp>
#include <opencv2/flann/flann.hpp>
#include <opencv2/contrib/contrib.hpp>


//using namespace std;
//using namespace cv;
class Train
{
public:
    Train();
    ~Train();
    //vector <cv::Mat> trainImages;
    //vector<vector<cv::KeyPoint> > trainKeyPoints;
    //vector<cv::Mat> trainDescriptors;
    //vector<vector<cv::KeyPoint> >  objectclassKeypoint[31];    //���30����Ʒ
    //vector<cv::Mat>  objectclassDescriptors[31];                        //���30����Ʒ
    //vector <cv::Mat> objectclassimages[31];
    int train(const int& sum);

};

#endif // TRAIN_H_INCLUDED
