#pragma once

class CDOTA_ScriptedSpawner : public CPointEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_szNPCFirstWaypoint; // offset 0x4A8, size 0x8, align 8
    int32 m_nNPCType; // offset 0x4B0, size 0x4, align 4
    bool m_bAllowRelaxation; // offset 0x4B4, size 0x1, align 1
    bool m_bPlayPostVictoryAnims; // offset 0x4B5, size 0x1, align 1
    bool m_bDisableAutoAttack; // offset 0x4B6, size 0x1, align 1
    bool m_bAutomaticallyRespawn; // offset 0x4B7, size 0x1, align 1
    bool m_bInvulnerable; // offset 0x4B8, size 0x1, align 1
    bool m_bAllowHeroTargets; // offset 0x4B9, size 0x1, align 1
    char _pad_04BA[0x2]; // offset 0x4BA
    int32 m_nActivityOverride; // offset 0x4BC, size 0x4, align 4
    float32 m_flDuration; // offset 0x4C0, size 0x4, align 4
    bool m_bAnimationFireOnce; // offset 0x4C4, size 0x1, align 1
    char _pad_04C5[0x3]; // offset 0x4C5
    CUtlVector< CDOTA_ScriptedSpawner::scripted_moveto_t > m_hMoveToTargets; // offset 0x4C8, size 0x18, align 8
    CEntityIOOutput m_OnAllUnitsKilled; // offset 0x4E0, size 0x18, align 255
    CEntityIOOutput m_OnUnitKilled; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnHealthLow; // offset 0x510, size 0x18, align 255
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x528, size 0x18, align 8
    CHandle< CBaseEntity > m_hSpawnpoint; // offset 0x540, size 0x4, align 4
    char _pad_0544[0x4]; // offset 0x544
    CUtlSymbolLarge m_szCustomNPCName; // offset 0x548, size 0x8, align 8
};
