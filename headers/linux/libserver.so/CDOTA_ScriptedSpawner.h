#pragma once

class CDOTA_ScriptedSpawner : public CPointEntity /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_szNPCFirstWaypoint; // offset 0x788, size 0x8, align 8
    int32 m_nNPCType; // offset 0x790, size 0x4, align 4
    bool m_bAllowRelaxation; // offset 0x794, size 0x1, align 1
    bool m_bPlayPostVictoryAnims; // offset 0x795, size 0x1, align 1
    bool m_bDisableAutoAttack; // offset 0x796, size 0x1, align 1
    bool m_bAutomaticallyRespawn; // offset 0x797, size 0x1, align 1
    bool m_bInvulnerable; // offset 0x798, size 0x1, align 1
    bool m_bAllowHeroTargets; // offset 0x799, size 0x1, align 1
    char _pad_079A[0x2]; // offset 0x79A
    int32 m_nActivityOverride; // offset 0x79C, size 0x4, align 4
    float32 m_flDuration; // offset 0x7A0, size 0x4, align 4
    bool m_bAnimationFireOnce; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    CUtlVector< CDOTA_ScriptedSpawner::scripted_moveto_t > m_hMoveToTargets; // offset 0x7A8, size 0x18, align 8
    CEntityIOOutput m_OnAllUnitsKilled; // offset 0x7C0, size 0x18, align 255
    CEntityIOOutput m_OnUnitKilled; // offset 0x7D8, size 0x18, align 255
    CEntityIOOutput m_OnHealthLow; // offset 0x7F0, size 0x18, align 255
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x808, size 0x18, align 8
    CHandle< CBaseEntity > m_hSpawnpoint; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
    CUtlSymbolLarge m_szCustomNPCName; // offset 0x828, size 0x8, align 8
};
