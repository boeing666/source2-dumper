#pragma once

class CCitadel_Ability_WreckingBallThrow : public CCitadelBaseTriggerAbility /*0x0*/  // sizeof 0xF88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF80]; // offset 0x0
    CHandle< CCitadel_Ability_WreckingBall > m_hWreckingBallAbility; // offset 0xF80, size 0x4, align 4
    char _pad_0F84[0x4]; // offset 0xF84
};
