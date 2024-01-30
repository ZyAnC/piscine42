#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3); //check input arguments is valid, should be 3 arguments

my ($x, $y, $density) = @ARGV; //convert argvs into x, y, and density

print "$y.ox\n"; //first line of map
//loop for each row(i) and column(j)
for (my $i = 0; $i < $y; $i++) {
  for (my $j = 0; $j < $x; $j++) {
    //generate a random number and compare it with the specified density
    if (int(rand($y) * 2) < $density) {
      //if the random number is less than the density, print obstacles
      print "o";
    }
    else {
      //print empty map
      print ".";
    }
  }
  //move to the next line after each row
  print "\n";
}