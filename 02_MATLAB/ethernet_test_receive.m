% Create a UDP port object and configure it to receive data
clear all
close all
udpPort = udpport('LocalPort', 25565);
disp('listening')
message = [];
while true
    % Receive data from the UDP port
    data = read(udpPort,1);
    message(end+1) = data;
    % Display the received data
    if data(end) == 59
        disp(['Received Data: ' message(1:end-1)]);
        message = [];
    end
end

