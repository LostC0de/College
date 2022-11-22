#include <iostream>
#include <aspose_ocr.h>
#include <string>
using namespace std;

int main()
{
    string image_path = "c:/python/well.JPG";

    // Подготовить буфер для результата (в символах len_byte = len * sizeof(wchar_t))
    const size_t len = 4096;
    wchar_t buffer[len] = { 0 };

    // Выполнить распознавание текста
    size_t size = aspose::ocr::page(image_path.c_str(), buffer, len);

    //Распечатать результат
    wcout << buffer << L"\n";
