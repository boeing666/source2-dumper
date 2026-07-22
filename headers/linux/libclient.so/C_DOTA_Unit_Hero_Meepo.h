#pragma once

class C_DOTA_Unit_Hero_Meepo : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    int32 m_nWhichMeepo; // offset 0x1F20, size 0x4, align 4
    char _pad_1F24[0x4]; // offset 0x1F24
};
