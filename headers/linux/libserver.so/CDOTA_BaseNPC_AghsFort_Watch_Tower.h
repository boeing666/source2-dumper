#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E2C]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1E2C, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1E30, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1E34, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1E38, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1E44, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1E48, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1E4C, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1E4D, size 0x1, align 1
    char _pad_1E4E[0x2]; // offset 0x1E4E
    CUtlSymbolLarge m_strEncounterName; // offset 0x1E50, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1E58, size 0x8, align 8
    CHandle< CBaseEntity > m_hEffigy; // offset 0x1E60, size 0x4, align 4
    int32 m_nDepth; // offset 0x1E64, size 0x4, align 4
    CHandle< CDOTA_BaseNPC_Effigy_AghsFort > m_hPedestal; // offset 0x1E68, size 0x4, align 4
    CHandle< CBaseEntity > m_hParticleSystem; // offset 0x1E6C, size 0x4, align 4
    char _pad_1E70[0x8]; // offset 0x1E70
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1E78, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1E7C, size 0x1, align 1
    char _pad_1E7D[0x3]; // offset 0x1E7D
    float32 m_flGoalCaptureProgress; // offset 0x1E80, size 0x4, align 4
    char _pad_1E84[0x4]; // offset 0x1E84
};
