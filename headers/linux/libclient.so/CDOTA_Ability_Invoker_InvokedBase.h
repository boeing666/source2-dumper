#pragma once

class CDOTA_Ability_Invoker_InvokedBase : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nQuasLevel; // offset 0x824, size 0x4, align 4
    int32 m_nWexLevel; // offset 0x828, size 0x4, align 4
    int32 m_nExortLevel; // offset 0x82C, size 0x4, align 4
};
