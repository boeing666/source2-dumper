#pragma once

enum DecalFlags_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eCannotClear = 1,
    eDecalProjectToBackfaces = 2,
    eAll = 4294967295,
    eAllButCannotClear = 4294967294,
};
