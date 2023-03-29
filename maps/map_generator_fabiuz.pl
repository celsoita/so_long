#!/usr/bin/perl
use warnings;
use strict;
die "program x y walls collectibles enemies" unless (scalar(@ARGV) == 5);
my ($x, $y, $walls, $collectibles, $enemies) = @ARGV;
print "|x:$x|y:$y|walls:1|collectibles:C|enemies:F|\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $walls) {
print "1";
}
elsif (int(rand($y) * 10) < $collectibles) {
print "C";
}
elsif (int(rand($y) * 100) < $enemies) {
print "F";
}
else {
print "0";
}
}
print "\n";
}
