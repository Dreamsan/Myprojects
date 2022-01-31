clc;clear;close all;

phot=imread('Colors.jpg');

for i=1:size(phot,1)
    for j=1:size(phot,2)
        red=phot(i,j,1);
        if red>200
            phot(i,j,:) =[0,255,0];
        else
            phot(i,j,:) =0;
        end
    end
end

imshow(phot);