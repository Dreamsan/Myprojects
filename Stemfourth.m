t = 0:0.5:12;
s1 = exp(-0.499.*t).*(0.378.*sin(1.3227.*t)+cos(1.3227.*t))
figure(1),plot(t,s1)
s2 = (-0.0774.*exp(-5.277.*t))+1.0774.*exp(-0.379.*t)
figure(2),plot(t,s2)
figure(3),plot(t,s1,t,s2)
grid on
xlabel('time in sec')
ylabel('s1 and s2')
title('plot for s1 and s2')
