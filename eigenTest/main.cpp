#include <iostream>
#include <ctime>

using namespace std;

#include <Eigen/Core>
#include <Eigen/Dense>

int main (int argc,char ** argv)
{
	Eigen::Matrix<float,2,3> matrix_23;
    Eigen::Vector3d v_3d;
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();
	cout <<"hello eigen"<<endl;
	return 0;
}
