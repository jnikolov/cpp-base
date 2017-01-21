#include "spdlog/spdlog.h"

int main(int argc, char* argv[])
{
        spdlog::set_level(spdlog::level::trace);
        auto console = spdlog::stdout_color_mt("console");
        console->trace("Trace!");
        console->debug("Debug!");
        console->info("Welcome to spdlog!");
        console->warn("Warning...!");
        console->error("Some error message with arg{}..", 1);
        console->critical("Omg this is critcal");

        return 0;
}
