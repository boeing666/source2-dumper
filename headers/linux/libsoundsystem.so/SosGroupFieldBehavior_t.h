#pragma once

enum SosGroupFieldBehavior_t : uint32_t  // sizeof 0x4
{
    kIgnore = 0,
    kBranch = 1,
    kMatch = 2,
};
