#pragma once

enum CitadelMusicSyncMode_t : uint32_t  // sizeof 0x4
{
    ESyncMode_None = 0,
    ESyncMode_Resume = 1,
    ESyncMode_RandomMarker = 2,
};
