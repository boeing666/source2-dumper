#pragma once

class CCitadel_Pickup_SoulBag : public CCitadel_Pickup /*0x0*/  // sizeof 0xB90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    int32 m_iGoldReward; // offset 0xB80, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hVictimPlayer; // offset 0xB84, size 0x4, align 4
    char _pad_0B88[0x8]; // offset 0xB88
};
