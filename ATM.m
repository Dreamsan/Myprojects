clc, clear
P = 1234;
balance = 10000;

Password = input('Please Enter your Passcode ');
if Password == P
          Option1 = input(' 1- Current balance \n 2- Cash Withdrawal \n 3-End transaction ');

if Option1 == 1 
    disp('Your current balance is'); disp(balance);
    
    Question1 = input('would you like to go back to the menu and continue? \n 1-Yes 2-No \n');
if Question1 ==1
elseif Question1 ==2
end

end
if Option1 == 2
    Amountwithdrawn = input('Please enter the amount you want to withdraw ');
    if Amountwithdrawn <balance
        balance = balance - Amountwithdrawn;
        disp('your remaining balance'); disp(balance);
    end
     Question2 = input('would you like to go back to the menu and continue? \n 1-Yes 2-No \n');
if Question2 ==1
elseif Question2 ==2
end

end

if Option1 == 3
    disp('thank you for using this ATM please dont forget to take your card before going, have a nice day');
end
end
if Password ~= P
   Password1 = input ('Please re enter your password')
   if Password1 ~= P 
       
   Password1 = input ('Please re enter your password')
   end
   if Password1~=P
       disp('Your card has been held inside of the atm for entering the wrong password for more than 2 times please contact the bank to get more information about the retrival');
   end
   if Password1 == P
       
          Option1 = input(' 1- Current balance \n 2- Cash Withdrawal \n 3-End transaction ');

if Option1 == 1 
    disp('Your current balance is'); disp(balance);
    
    Question1 = input('would you like to go back to the menu and continue? \n 1-Yes 2-No \n');
if Question1 ==1
elseif Question1 ==2
end

end
if Option1 == 2
    Amountwithdrawn = input('Please enter the amount you want to withdraw ');
    if Amountwithdrawn <balance
        balance = balance - Amountwithdrawn;
        disp('your remaining balance'); disp(balance);
    end
     Question2 = input('would you like to go back to the menu and continue? \n 1-Yes 2-No \n');
if Question2 ==1
elseif Question2 ==2
end

end

if Option1 == 3
    disp('thank you for using this ATM please dont forget to take your card before going, have a nice day');
    
end
   end
   
   end

