#pragma once

class sPendingTreeRemoval  // sizeof 0xC, align 0xFF [trivial_dtor] (server)
{
public:
    int32 nTeam; // offset 0x0, size 0x4, align 4
    int32 nIndex; // offset 0x4, size 0x4, align 4
    GameTime_t fTimestamp; // offset 0x8, size 0x4, align 255
};
