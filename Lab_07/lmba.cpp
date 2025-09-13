#include<iostream>
using namespace std;
class Matrix
{
		private :
			int a11;int a12;int a13;
			int a21;int a22;int a23;
			int a31;int a32;int a33;
			
			int b11;int b12;int b13;
			int b21;int b22;int b23;
			int b31;int b32;int b33;
			
			int z11;int z12;int z13;
			int z21;int z22;int z23;
			int z31;int z32;int z33;
			
	public:
		
		int MUL(int a[][3], int b[][3], int mul[][3])
		{
			//Initializing the all indexes of Mul matrix
		for(int i = 0; i <3; ++i)
        for(int j = 0; j <3; ++j)
        {
            mul[i][j]=0;
        }
        // Multiplying the both matrix to get result in Mul Matrix.
    for(int i = 0; i <3; ++i)
        for(int j = 0; j <3; ++j)
            for(int k = 0; k<3; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
		return mul[3][3];
		}
			
		// SET FOR A
		void set_a11(int c11){a11=c11;}
		void set_a12(int c12){a12=c12;}
		void set_a13(int c13){a13=c13;}
		void set_a21(int c21){a21=c21;}
		void set_a22(int c22){a22=c22;}
		void set_a23(int c23){a23=c23;}
		void set_a31(int c31){a31=c31;}
		void set_a32(int c32){a32=c32;}
		void set_a33(int c33){a33=c33;}
	
		// SET FOR B
		void set_b11(int d11){b11=d11;}
		void set_b12(int d12){b12=d12;}
		void set_b13(int d13){b13=d13;}
		void set_b21(int d21){b21=d21;}
		void set_b22(int d22){b22=d22;}
		void set_b23(int d23){b23=d23;}
		void set_b31(int d31){b31=d31;}
		void set_b32(int d32){b32=d32;}
		void set_b33(int d33){b33=d33;}
		
		// SET FOR Z
		void set_z11(int y11){z11=y11;}
		void set_z12(int y12){z12=y12;}
		void set_z13(int y13){z13=y13;}
		void set_z21(int y21){z21=y21;}
		void set_z22(int y22){z22=y22;}
		void set_z23(int y23){z23=y23;}
		void set_z31(int y31){z31=y31;}
		void set_z32(int y32){z32=y32;}
		void set_z33(int y33){z33=y33;}
		
		//GET FOR A
		int get_a11(){return a11;}
		int get_a12(){return a12;}
		int get_a13(){return a13;}
		int get_a21(){return a21;}
		int get_a22(){return a22;}
		int get_a23(){return a23;}
		int get_a31(){return a31;}
		int get_a32(){return a32;}
		int get_a33(){return a33;}
		
		
		//GET FOR B
		int get_b11(){return	b11;}
		int get_b12(){return	b12;}
		int get_b13(){return	b13;}
		int get_b21(){return	b21;}
		int get_b22(){return	b22;}
		int get_b23(){return	b23;}
		int get_b31(){return	b31;}
		int get_b32(){return	b32;}
		int get_b33(){return	b33;}
		
		// GET FOR Z
		
		int get_z11(){return	z11;}
		int get_z12(){return	z12;}
		int get_z13(){return	z13;}
		int get_z21(){return	z21;}
		int get_z22(){return	z22;}
		int get_z23(){return	z23;}
		int get_z31(){return	z31;}
		int get_z32(){return	z32;}
		int get_z33(){return	z33;}
	
};

int main()
{
	Matrix C1;
	int a[3][3];
	int b[3][3];
	int mul[3][3];
	
	int r11,r12,r13,r21,r22,r23,r31,r32,r33;
	
	int t11,t12,t13,t21,t22,t23,t31,t32,t33;
	
	int result11,result12,result13,result21,result22,result23,result31,result32,result33;
	
	
	cout<<"FOR THE FIRST MATRIX "<<endl;
	
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cout<<"Enter value in a"<<i<<j<<" : ";
			cin>>a[i-1][j-1];
			cout<<endl;
		}
	}
	cout<<"FOR THE SECOND MATRIX "<<endl;
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cout<<"Enter value in a"<<i<<j<<" : ";
			cin>>b[i-1][j-1];
			cout<<endl;
		}
	}
	//Set for A
	C1.set_a11(a[0][0]);C1.set_a12(a[0][1]);C1.set_a13(a[0][2]);
	C1.set_a21(a[1][0]);C1.set_a22(a[1][1]);C1.set_a23(a[1][2]);
	C1.set_a31(a[2][0]);C1.set_a32(a[2][1]);C1.set_a33(a[2][2]);
	//Set for B
	C1.set_b11(b[0][0]);C1.set_b12(b[0][1]);C1.set_b13(b[0][2]);
	C1.set_b21(b[1][0]);C1.set_b22(b[1][1]);C1.set_b23(b[1][2]);
	C1.set_b31(b[2][0]);C1.set_b32(b[2][1]);C1.set_b33(b[2][2]);

	C1.MUL(a,b,mul); 
	
	C1.set_z11(mul[0][0]);C1.set_z12(mul[0][1]);C1.set_z13(mul[0][2]);
	C1.set_z21(mul[1][0]);C1.set_z22(mul[1][1]);C1.set_z23(mul[1][2]);
	C1.set_z31(mul[2][0]);C1.set_z32(mul[2][1]);C1.set_z33(mul[2][2]);
	
	// Getting values from array A
	r11=C1.get_a11();r12=C1.get_a12();r13=C1.get_a13();
	r21=C1.get_a21();r22=C1.get_a22();r23=C1.get_a23();
	r31=C1.get_a31();r32=C1.get_a32();r33=C1.get_a33();
	// Getting values from array B
	t11=C1.get_b11();t12=C1.get_b12();t13=C1.get_b13();
	t21=C1.get_b21();t22=C1.get_b22();t23=C1.get_b23();
	t31=C1.get_b31();t32=C1.get_b32();t33=C1.get_b33();
	// Getting values from array C
	result11=C1.get_z11();result12=C1.get_z12();result13=C1.get_z13();
	result21=C1.get_z21();result22=C1.get_z22();result23=C1.get_z23();
	result31=C1.get_z31();result32=C1.get_z32();result33=C1.get_z33();
	
	cout<<"\tFIRST MATRIX IS "<<endl;
	cout<<"\t"<<r11<<"\t"<<r12<<"\t"<<r13<<endl;
	cout<<"\t"<<r21<<"\t"<<r22<<"\t"<<r23<<endl;
	cout<<"\t"<<r31<<"\t"<<r32<<"\t"<<r33<<endl;
	
	cout<<"\tSECOND MATRIX IS "<<endl;
	cout<<"\t"<<t11<<"\t"<<t12<<"\t"<<t13<<endl;
	cout<<"\t"<<t21<<"\t"<<t22<<"\t"<<t23<<endl;
	cout<<"\t"<<t31<<"\t"<<t32<<"\t"<<t33<<endl;
	
	cout<<"\tMULTIPLE MATRIX IS "<<endl;

	cout<<"\t"<<result11<<"\t"<<result12<<"\t"<<result13<<endl;
	cout<<"\t"<<result21<<"\t"<<result22<<"\t"<<result23<<endl;
	cout<<"\t"<<result31<<"\t"<<result32<<"\t"<<result33;
	
	return 0;
}
