//알고리즘 내용 참조
//https://www.notion.so/Draw-Line-Algorithm-0c288dc6061a43f7a3de43589e4223d6

#include <iostream>
using namespace std;

void DDALineAlgorithm(int x0, int y0, int x1, int y1)
{
	bool steep = false;
	if (std::abs(x0 - x1) < std::abs(y0 - y1))
	{
		std::swap(x0, y0);
		std::swap(x1, y1);
	}
	if (x0 > x1)
	{
		std::swap(x0 ,x1);
		std::swap(y0, y1);
	}
	for (int x = x0; x < x1; x++)
	{
		float t = (x - x0) / (float)(x1 - x0);
		int y = y0 * (1. - t) + y1 * t;
		if (steep)
		{
			std::cout << "(" << y << "," << x << ")" << std::endl;
		}
		else
		{
			std::cout << "(" << x << "," << y0 << ")" << std::endl;
		}
	}
}
void BresenhamDrawLine(int x0, int y0, int x1, int y1)
{
	int dx = (x1 - x0);
	int dy = (y1 - y0);
	
	int p = 2 * dy - dx;

	for (int x = x0; x < dx; x++)
	{
		if (p > 0)
		{
			p += (2 * dy - 2 * dx);
			y0++;
			std::cout << "("<<x<<","<<y0<<")" << std::endl;
		}
		else
		{
			p += 2 * dy;
			std::cout << "(" << x << "," << y0 << ")" << std::endl;
		}
	}

}
void midPoint(int X1, int Y1, int X2, int Y2)
{
	// calculate dx & dy

	int dx = X2 - X1;
	int dy = Y2 - Y1;

	if (dy <= dx) {
		// initial value of decision parameter d
		int d = dy - (dx / 2);
		int x = X1, y = Y1;

		// Plot initial given point
		// putpixel(x,y) can be used to print pixel
		// of line in graphics
		cout << x << "," << y << "\n";

		// iterate through value of X
		while (x < X2)
		{
			x++;

			// E or East is chosen
			if (d < 0)
				d = d + dy;

			// NE or North East is chosen
			else
			{
				d += (dy - dx);
				y++;
			}

			// Plot intermediate points
			// putpixel(x,y) is used to print pixel
			// of line in graphics
			cout << x << "," << y << "\n";
		}
	}

	else if (dx < dy)
	{
		// initial value of decision parameter d
		int d = dx - (dy / 2);
		int x = X1, y = Y1;

		// Plot initial given point
		// putpixel(x,y) can be used to print pixel
		// of line in graphics
		cout << x << "," << y << "\n";

		// iterate through value of X
		while (y < Y2)
		{
			y++;

			// E or East is chosen
			if (d < 0)
				d = d + dx;

			// NE or North East is chosen
			// NE or North East is chosen
			else
			{
				d += (dx - dy);
				x++;
			}

			// Plot intermediate points
			// putpixel(x,y) is used to print pixel
			// of line in graphics
			cout << x << "," << y << "\n";
		}
	}
}

int main()
{
	//BresenhamDrawLine(2, 2, 8, 5);
	//midPoint(2, 2, 8, 5);
	DDALineAlgorithm(2, 2, 8, 5);
}