#pragma once

class CCitadel_Modifier_Objective_Bullet_Resist : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CTriggerTrooperDetector > m_hTrigger; // offset 0x150, size 0x4, align 4
    int32 m_iEnemyHeroCount; // offset 0x154, size 0x4, align 4
};
