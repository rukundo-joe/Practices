<html>
<script>

// Java Script Program to find the Discount Percentage



// Function to find the Discount Percentage
function discountPercentage( S, M)
{
	// Calculating discount
	let discount = M - S;

	// Calculating discount percentage
	let disPercent = (discount / M) * 100;

	return disPercent;
}

// Driver code
let M, S;
	M = 120;
	S = 100;

	document.write(discountPercentage(S,M).toFixed(2));
	document.write("%");
	document.write("<br>");

	M = 1000;
	S = 500;

	document.write(discountPercentage(S,M).toFixed(2));
	document.write("%");

// Contributed by sravan kumar
</script>

</html>
