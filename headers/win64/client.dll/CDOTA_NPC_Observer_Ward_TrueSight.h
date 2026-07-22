#pragma once

class CDOTA_NPC_Observer_Ward_TrueSight : public CDOTA_NPC_Observer_Ward /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19C8]; // offset 0x0
    float32 m_flTrueSight; // offset 0x19C8, size 0x4, align 4
    CEntityHandle m_hAbilityEntity; // offset 0x19CC, size 0x4, align 4
};
