#include "Downloader.hpp"
#include "Parametrs.hpp"
#include "Parser.hpp"

int main(int argc, char* argv[]) {
    prepare_command_line(argc, argv);
    printParametrs();
    Downloader d(parametrs.downloader_threads);
    Parser p(parametrs.parser_threads);
    d.downloading(parametrs.url, parametrs.depth, p);

    return 0;
}