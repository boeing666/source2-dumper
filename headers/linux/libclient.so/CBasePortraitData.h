#pragma once

class CBasePortraitData  // sizeof 0xDF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x410]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_iModelIndex; // offset 0x410, size 0x8, align 8
    CUtlStringToken m_skin; // offset 0x418, size 0x4, align 4
    char _pad_041C[0x9AC]; // offset 0x41C
    bool m_bHasSetupView; // offset 0xDC8, size 0x1, align 1
    char _pad_0DC9[0x1F]; // offset 0xDC9
    float32 m_flRotation; // offset 0xDE8, size 0x4, align 4
    char _pad_0DEC[0x4]; // offset 0xDEC
};
