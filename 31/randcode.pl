my @vars = <x0 x1 x2>;
my @ops = < + - * min max gcd lcm >;

say 'my $x0 = 0;';
say 'my $x1 = 0;';
say 'my $x2 = 0;';

for 1..20_000 -> $c {
    given (^2).pick {
        when 0 {
            my $varname = "v$c";
            push @vars, $varname;
            say "my \$$varname = " ~ (^1_000).pick ~ ';';
        }
        when 1 {
            my $v1 = @vars[(^@vars.elems).pick];
            my $v2 = @vars[(^@vars.elems).pick];
            my $v3 = @vars[(^@vars.elems).pick];
            
            my $op = @ops[(^@ops.elems).pick];

            say "\$$v3 = \$$v1 $op \$$v2;";
        }
    }
}
