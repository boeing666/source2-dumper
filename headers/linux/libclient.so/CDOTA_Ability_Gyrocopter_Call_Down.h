#pragma once

class CDOTA_Ability_Gyrocopter_Call_Down : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x824, size 0xC, align 4
    int32 range_scepter; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
