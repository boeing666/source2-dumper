#pragma once

class CDOTA_Ability_Invoker_InvokedBase : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nQuasLevel; // offset 0x580, size 0x4, align 4
    int32 m_nWexLevel; // offset 0x584, size 0x4, align 4
    int32 m_nExortLevel; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
};
