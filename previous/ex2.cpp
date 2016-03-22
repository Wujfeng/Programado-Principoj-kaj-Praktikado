#include <iostream> 

int main() 
{
    std::cout << "The instructions to find bathroom in my home.\n";
    std::cout << "Prerequisites: \n"
              << "You should be know these terms:\n"
              << "\t1. Doors\n"
              << "\t2. Stairs\n"
              << "\t3. Left\n"
              << "\t4. Right\n"
              << "\t5. Straight\n"
              
              << "Instructions:\n"
              << "(I'm assuming that you're standing at the main door"
              << " on the ground floor, facing the garage.)\n"
              << "\t1. Walk 10 steps.\n"
              << "\t2. Turn left.\n"
              << "\t3. Climb a stair and walk one step.\n"
              << "\t4. Climb the staircase ahead of you by 7 steps.\n"
              << "\t5. Turn left, take a step and turn left again.\n"
              << "\t6. Repeat the steps 4 and 5 three times.\n"
              << "\t7. Turn right and walk for eight steps.\n"
              << "\t8. Turn left and walk for seven steps.\n"
              << "\t9. Turn left again and walk for four steps.\n"
              << "Congratulations! You have arrived at my bathroom's door.\n"; 
              return 0;
}
