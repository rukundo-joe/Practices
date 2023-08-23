<?php
$radius = 100;
$sides = 8;

$points = array();
for ($i = 1; $i <= $sides; $i++) {
    $points[] = round( $radius * cos($i*2 * pi() / $sides) + $radius );  // x
    $points[] = round( $radius * sin($i*2 * pi() / $sides) + $radius );  // y
}



// Draw the image.
$im = imagecreate($radius*2 + 10, $radius*2 + 10);
$black = imagecolorallocate($im, 0, 0, 0);
$white = imagecolorallocate($im, 255, 255, 255);

imagefill($im, 0, 0, $white);  // White background

imagefilledpolygon($im, $points, $sides, $black);

header('Content-type: image/png');
imagepng($im);