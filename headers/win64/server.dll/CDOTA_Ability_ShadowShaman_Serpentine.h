#pragma once

class CDOTA_Ability_ShadowShaman_Serpentine : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 length; // offset 0x580, size 0x4, align 4
    int32 count; // offset 0x584, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x588, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x594, size 0xC, align 4
};
