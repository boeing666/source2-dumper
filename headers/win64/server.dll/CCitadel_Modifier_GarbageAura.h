#pragma once

class CCitadel_Modifier_GarbageAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x288]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hEnemyHeroInVacuum; // offset 0x288, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x2A0, size 0x4, align 4
    GameTime_t m_tLastDamageTime; // offset 0x2A4, size 0x4, align 255
};
