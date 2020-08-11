{ constraints }
const
    MAXN = 300001;

{ input data }
var
    N, M, i     : longint;
    X, Y, A, B  : array[0..MAXN-1] of longint;

begin
{
    uncomment the following lines if you want to read/write from files
    assign(input,  'input.txt');  reset(input);
    assign(output, 'output.txt'); rewrite(output);
}

    readln(N);
    for i:=0 to N-1 do
        readln(X[i], Y[i]);
    readln(M);
    for i:=0 to M-1 do
        readln(A[i], B[i]);

    { insert your code here }

    writeln(42); { change 42 with actual answer }
end.
