    use strict;
    use warnings;
	use Cwd;
	use 5.010;

	print "\nPrinting files from the current directory: \n\n";
    my $dir = cwd();
    opendir(DIR, $dir) or die $!;
	
    while (my $f = readdir(DIR)) {
        next if ($f =~ m/^\./);
		print "$f\n";
		my @stat = stat $f;
		print "Owner's User ID:";
		say $stat[4];
		print "Size:";
		say $stat[7];
		print "Type:";
		say $stat[2];
		print "Last Accessed (seconds from epoch):";
		say $stat[8];
		print "Last Modified (seconds from epoch):";
		say $stat[9];
		print "\n";
    }
	closedir(DIR);

	print "Enter the filename to search for :  ";
	my $name = <STDIN>;
	chomp($name);
	opendir(DIR, $dir) or die $!;
	while(my $file=readdir(DIR)){
	next unless ($file=~$name);
	print "File found\n";
	}
	closedir(DIR);

	exit 0;
