#include "spdlog/spdlog.h"

int main(int argc, char* argv[]) 
{
    auto console = spdlog::stdout_color_mt("console");
    console->info("Welcome to spdlog!");
    console->error("Some error message with arg{}..", 1);

    return 0;
}