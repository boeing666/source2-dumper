#pragma once

class sPendingTreeModelChange  // sizeof 0x18, align 0xFF (server)
{
public:
    int32 nTeam; // offset 0x0, size 0x4, align 4
    int32 nIndex; // offset 0x4, size 0x4, align 4
    CUtlString strModel; // offset 0x8, size 0x8, align 8
    int32 nChangeToken; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
