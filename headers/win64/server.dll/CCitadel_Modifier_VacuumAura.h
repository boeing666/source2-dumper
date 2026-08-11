#pragma once

class CCitadel_Modifier_VacuumAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x4A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x488]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum; // offset 0x488, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x4A0, size 0x4, align 4
    GameTime_t m_tLastDamageTime; // offset 0x4A4, size 0x4, align 255
};
