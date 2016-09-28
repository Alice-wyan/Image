#include <stdio.h>
#include <math.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>


#include <opencv2/opencv.hpp>
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <cv.h>
#include <cxcore.h>
#include <highgui.h>
#include"findcountour.h"

using namespace cv;

using namespace std;

int main()
{

	Mat img11=imread("1.png",1);//ԭͼ
	IplImage *src=&IplImage(img11);
	Mat dst1=imread("pic.jpg",1);//����ͼ
	IplImage *dst=&IplImage(dst1);
	FindCountour fc;

	fc.originalpicture(src,150,0.5,225,0,0);//�˴�ִ�б���ʹxyλ��дΪ00
	vector<int>distance;
	distance.clear();
	distance=fc.getdistance();
	fc.backgroundpicture(src,dst,150,200,0.5,225,0.5,distance[0],distance[1],1);
	//	src--ԭͼ��dst--����ͼ��200--ͼƬ��ֵ��1--���ű�����
	//60--��ת�Ƕ�, 0.5--ͼƬ��ɫ�ٷֱȣ�200--x����ƽ�ƾ��룬200--y����ƽ�ƾ���	 1---�Ƿ�ע������   
	return 0;
}




