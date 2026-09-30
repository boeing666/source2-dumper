#pragma once

class CAI_GoalEntity : public CBaseEntity /*0x0*/  // sizeof 0x4F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CUtlSymbolLarge m_iszActor; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszGoal; // offset 0x4C0, size 0x8, align 8
    bool m_fStartActive; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x3]; // offset 0x4C9
    CAI_GoalEntity::SearchType_t m_SearchType; // offset 0x4CC, size 0x4, align 4
    CUtlSymbolLarge m_iszConceptModifiers; // offset 0x4D0, size 0x8, align 8
    CUtlVector< CHandle< CAI_BaseNPC > > m_actors; // offset 0x4D8, size 0x18, align 8
    CHandle< CBaseEntity > m_hGoalEntity; // offset 0x4F0, size 0x4, align 4
    uint32 m_flags; // offset 0x4F4, size 0x4, align 4
};
