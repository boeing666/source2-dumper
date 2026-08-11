#pragma once

class CDOTA_NPC_Observer_Ward_TrueSight : public CDOTA_NPC_Observer_Ward /*0x0*/  // sizeof 0x1BA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B98]; // offset 0x0
    float32 m_flTrueSight; // offset 0x1B98, size 0x4, align 4
    CEntityHandle m_hAbilityEntity; // offset 0x1B9C, size 0x4, align 4
};
