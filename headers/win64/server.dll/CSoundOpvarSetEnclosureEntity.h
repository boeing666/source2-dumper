#pragma once

class CSoundOpvarSetEnclosureEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x650]; // offset 0x0
    CUtlSymbolLarge m_iszPathHelperEntityName; // offset 0x650, size 0x8, align 8
    Vector m_vHeightTop; // offset 0x658, size 0xC, align 4
    Vector m_vHeightBottom; // offset 0x664, size 0xC, align 4
};
