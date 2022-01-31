clc, clear
R=1;
Y=2;
G=3;
Color = input ('please enter the Color \n 1-R \n 2- Y \n 3- G \n');
Weight= input ('please enter the weight of it');

if Color == 1
if Weight <= 120
    disp('your pepper is Red and the weight is under 120');
end
if Weight >= 120
    disp('your pepper is Red and the weight is over 120');
end
end
if Color == 2
    if Weight <= 120
    disp('your pepper is Yellow and the weight is under 120');
end
if Weight >= 120
    disp('your pepper is Yellow and the weight is over 120');
end
end
if Color == 3
        if Weight <= 120
    disp('your pepper is Green and the weight is under 120');
end
if Weight >= 120
    disp('your pepper is Green and the weight is over 120');
end
end