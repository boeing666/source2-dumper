#pragma once

class CHeroStatueLiked  // sizeof 0x38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    PlayerID_t m_iPlayerIDLiker; // offset 0x30, size 0x4, align 255
    PlayerID_t m_iPlayerIDLiked; // offset 0x34, size 0x4, align 255
};
