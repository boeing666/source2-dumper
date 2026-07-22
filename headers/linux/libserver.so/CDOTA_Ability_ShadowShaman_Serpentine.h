#pragma once

class CDOTA_Ability_ShadowShaman_Serpentine : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 length; // offset 0x85C, size 0x4, align 4
    int32 count; // offset 0x860, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x864, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x870, size 0xC, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
