

132	156	55	20	51 107	158	177	101	100 122	170	188	88	11



a {the list}
left <-  m <- 0
right <- n			{n is the last element of a}
indexProduct		{the index product }

repeat 
	if (a [m + 1]] > left)
		swap (left [m + 1], left)
	if (a [n - 1] > right)
		swap (a [n -1], right)
	m <- m + 1
	n <- n - 1
until (m > n)
indexProduct <- left * right

// walk through

left	right	lIndex	rIndex
132		11		0		14
156		88		1		13
156		188		2		12
156		188		3		11
156		188		4		10
156		188		5		9
158		188		6		8
177		188		7		7

177 * 188 	.qed

