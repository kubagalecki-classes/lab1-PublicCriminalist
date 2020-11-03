class Wektor2D
{
  public:
  Wektor2D(){
    x=0;
    y=0;
  }
  Wektor2D(double a, double b){
    x=a;
    y=b;
  }
  void setX(double a){ x=a; };
  void setY(double a){ y=a; };
  double getX(){return x;};
  double getY(){return y;};
  private:
  double x,y;
  friend Wektor2D operator+(const Wektor2D& a, const Wektor2D& b);
  friend double operator*(const Wektor2D& a, const Wektor2D& b);
};
Wektor2D operator+(const Wektor2D& a, const Wektor2D& b)
{
	Wektor2D tmp = a;
	tmp.x += b.x;
	tmp.y += b.y;
	Wektor2D::num_wek+=2;
	return tmp;
}
double operator*(const Wektor2D& a,const Wektor2D& b)
{
	double tmp=a.x*b.x+a.y*b.y;
	return tmp;
}
