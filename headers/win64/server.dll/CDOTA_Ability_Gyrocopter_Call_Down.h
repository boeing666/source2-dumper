#pragma once

class CDOTA_Ability_Gyrocopter_Call_Down : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x580, size 0xC, align 4
    int32 range_scepter; // offset 0x58C, size 0x4, align 4
};
