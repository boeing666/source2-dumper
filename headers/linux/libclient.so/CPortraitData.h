#pragma once

class CPortraitData : public CBasePortraitData /*0x0*/  // sizeof 0xE20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xDF0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_RenderList; // offset 0xDF0, size 0x18, align 8
    CHandle< C_BaseEntity > m_hHero; // offset 0xE08, size 0x4, align 4
    char _pad_0E0C[0x14]; // offset 0xE0C
};
