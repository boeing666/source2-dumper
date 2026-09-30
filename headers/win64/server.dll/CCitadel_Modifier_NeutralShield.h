#pragma once

class CCitadel_Modifier_NeutralShield : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flShieldActivateDelay; // offset 0x140, size 0x4, align 4
    GameTime_t m_timeEnemyDisappeared; // offset 0x144, size 0x4, align 255
};
