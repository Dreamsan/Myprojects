A = [3 2 -2; 2 -2 4; 1 -0.5 1];
B = [1; -2; 0];

inverse = inv(A);         
disp(inverse);            

X = inverse * B;    
disp(X);