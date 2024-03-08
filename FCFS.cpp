#include <iostream>

int main() {
    int process_count;

    std::cout << "Enter total number of processes(maximum 10): ";
    std::cin >> process_count;
    std::cout << std::endl;

    // Number of processes not more than 10 processes
    if (process_count > 10) {
        while (process_count > 10) {
            std::cout << "Please enter 10 processes." << std::endl;
            std::cin >> process_count;
       }
    }
//  DEBUG: print process count
//  std::cout << "Number of processes entered: " << process_count << std::endl;

    int burst_times[process_count];
    // The CPU time required by each process (Burst Time)
    std::cout << "Enter Process Burst Time" << std::endl;
    for (int i = 0; i < process_count; i++) {
        std::cout << "P[" << i+1 << "]: ";
        std::cin >> burst_times[i];
    }

    // DEBUG: print burst times
//  for (int i = 0; i < process_count; i++) {
//     std::cout << "Burst time for Process #" << i+1 << " " << burst_times[i] << std::endl;
//  }


}
