<?php
// PHP Program to find the
// Discount Percentage

// Function to find the
// Discount Percentage
function discountPercentage($S, $M)
{
	// Calculating discount
	$discount = $M - $S;

	// Calculating discount percentage
	$disPercent = ($discount /$M) * 100;

	return $disPercent;
}

// Driver code
$M; $S;
$M = 120;
$S = 100;

echo discountPercentage($S, $M), "%", "\n";

$M = 1000;
$S = 500;

echo discountPercentage($S, $M), "%", "\n";

// This code is contribute
// by inder_verma
?>
