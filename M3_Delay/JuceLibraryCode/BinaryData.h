/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   Background3_png;
    const int            Background3_pngSize = 5959;

    extern const char*   Asset_8_png;
    const int            Asset_8_pngSize = 3282592;

    extern const char*   Backgroundtest2_png;
    const int            Backgroundtest2_pngSize = 3065;

    extern const char*   Background_test_png;
    const int            Background_test_pngSize = 13946;

    extern const char*   Asset7_png;
    const int            Asset7_pngSize = 2417579;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 5;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
