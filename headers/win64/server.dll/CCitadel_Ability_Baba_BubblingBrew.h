#pragma once

class CCitadel_Ability_Baba_BubblingBrew : public CCitadelBaseAbility /*0x0*/  // sizeof 0x27A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C80]; // offset 0x0
    CCitadel_Ability_Baba_BubblingBrew::EState m_eState; // offset 0x1C80, size 0x4, align 4
    int32 m_CurrentStacks; // offset 0x1C84, size 0x4, align 4
    GameTime_t m_tStackExpiryTime; // offset 0x1C88, size 0x4, align 255
    char _pad_1C8C[0xB14]; // offset 0x1C8C
};
