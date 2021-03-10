#include <iostream>

int Fibonacci(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return(Fibonacci(num - 1) + Fibonacci(num - 2));
}


void HanoiTower(int blockNum, char from, char by, char to)
{
	if (blockNum == 1)
		std::cout << "1번원반이" << from << "에서" << to << "로 이동했습니다" << std::endl;
	else
	{
		//A기둥에서 C를 거쳐 B로 가는경우
		HanoiTower(blockNum - 1, from, to, by);
		std::cout << blockNum<<"번원반이" << from << "에서" << to << "로 이동했습니다" << std::endl;
		//B에서 A를 거쳐 C로 가는경우
		HanoiTower(blockNum - 1, by, from, to);
	}
}
int main()
{
	std::cout << "Fibonacci Sequence" << std::endl;

	std::cout << Fibonacci(15);
	std::cout << '\n'<<std::endl;

	std::cout << "HanoiTower" << std::endl;

	HanoiTower(4, 'A', 'B', 'C');
	return 0;
}