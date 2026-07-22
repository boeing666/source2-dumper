#pragma once

class CPortraitData : public CBasePortraitData /*0x0*/  // sizeof 0xE00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xDD0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_RenderList; // offset 0xDD0, size 0x18, align 8
    CHandle< C_BaseEntity > m_hHero; // offset 0xDE8, size 0x4, align 4
    char _pad_0DEC[0x14]; // offset 0xDEC
};
