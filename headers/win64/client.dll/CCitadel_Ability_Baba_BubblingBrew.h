#pragma once

class CCitadel_Ability_Baba_BubblingBrew : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2200, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CCitadel_Ability_Baba_BubblingBrew::EState m_eState; // offset 0x16E0, size 0x4, align 4
    int32 m_CurrentStacks; // offset 0x16E4, size 0x4, align 4
    GameTime_t m_tStackExpiryTime; // offset 0x16E8, size 0x4, align 255
    char _pad_16EC[0xB14]; // offset 0x16EC
};
