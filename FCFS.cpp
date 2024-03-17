#include <iostream>

int main() {
    int process_count;
    int waiting_time = 0;
    int turnaround_time = 0;
    int avg_waiting = 0;
    int avg_turnaround = 0;

    std::cout << "Enter total number of processes(maximum 10):";
    std::cin >> process_count;
    std::cout << std::endl;

    // Number of processes not more than 10 processes
    if (process_count > 10) {
        while (process_count > 10) {
            std::cout << "Please enter a maximum of 10 processes." << std::endl;
            std::cin >> process_count;
       }
    }
    // DEBUG: print process count
    // std::cout << "Number of processes entered: " << process_count << std::endl;

    int burst_times[process_count];
    // The CPU time required by each process (Burst Time)
    std::cout << "Enter Process Burst Time" << std::endl;
    for (int i = 0; i < process_count; i++) {
        std::cout << "P[" << i+1 << "]:";
        std::cin >> burst_times[i];
    }
    std::cout << std::endl;

    // DEBUG: print burst times
    // for (int i = 0; i < process_count; i++) {
    //     std::cout << "Burst time for Process #" << i+1 << " " << burst_times[i] << std::endl;
    // }

    // Printing details
    std::cout << "Process" << "\t\t" << "Burst Time" << "\t"
              << "Waiting Time" << "\t" << "Turnaround Time" << std::endl;
    for (int i = 0; i < process_count; i++) {
        std::cout << "P[" << i+1 << "] " << "\t\t" << burst_times[i];
        turnaround_time += burst_times[i];
        std::cout << "\t\t" << waiting_time;
        std::cout << "\t\t" << turnaround_time << std::endl;

        avg_waiting += waiting_time;
        waiting_time += burst_times[i];
        avg_turnaround += turnaround_time;
    }
    std::cout << std::endl;

    avg_waiting /= process_count;
    avg_turnaround /= process_count;

    std::cout << "Average Waiting Time:" << avg_waiting << std::endl;
    std::cout << "Average Turnaround Time:" << avg_turnaround << std::endl;
}