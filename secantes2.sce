function [y]=f(x)
y=x³-0,165*x²+0,0003993
endfunction
function secantes2(a, b, e2, n)
while(abs(b-a)>e2)
for k=6:n
x = (a*f(b)-b*f(a))/(f(b)-f(a));
printf('\nx = %g, x1=%g e x2 = %g',x,f(a),f(b));
a=b;
b=x;
end
end
printf('\nIteração %g ',k+1);
printf('\nApós %g iterações, a raíz é %g',k+1,x);
endfunction
