#include <iostream>

int main() {
    int process_count;

    std::cout << "Enter the number of processes: ";
    std::cin >> process_count;

    // Number of processes not more than 10 processes
    if (process_count > 10) {
        while (process_count > 10) {
            std::cout << "Please enter 10 processes." << std::endl;
            std::cin >> process_count;
       }
    }
    std::cout << "Number of processes entered: " << process_count << std::endl;

    int burst_times[process_count];

    // The CPU time required by each process (Burst Time)
    for (int i = 0; i < process_count; i++) {
        std::cout << "Enter the burst time for process #" << i+1 << std::endl;
        std::cin >> burst_times[i];
    }

    // DEBUG: print burst times
    for (int i = 0; i < process_count; i++) {
       std::cout << "Burst time for Process #" << i+1 << " " << burst_times[i] << std::endl;
    }


}
