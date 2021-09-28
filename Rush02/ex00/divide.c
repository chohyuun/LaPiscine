int	divide1(int len)
{
	if (len == 3)
		hundred();
	if else (len > 3 && len < 7)
		thousand();
	if else (len > 6 && len < 10)
		million();
	if else (len > 9 && len < 13)
		billion();
	if else (len > 12 && len < 16)
		trillion();
	if else (len > 15 && len < 19)
		quadrillion();
}

int	divide2(int len)
{
	if (len > 18 && len < 22)
		quintillion();
	if else (len > 21 && len < 25)
		sextillion();
	if else (len > 24 && len < 28)
		septillion();
	if else (len > 27 && len < 31)
		octillion();
	if else (len > 30 && len < 34)
		nonillion();
	if else (len > 33 && len < 37)
		decillion();
	if else (len > 36 && len < 40)
		undecillion();
}
