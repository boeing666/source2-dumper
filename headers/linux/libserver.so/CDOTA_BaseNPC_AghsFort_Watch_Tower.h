#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CAC]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1CAC, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1CB0, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1CB4, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1CB8, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1CC4, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1CC8, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1CCC, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1CCD, size 0x1, align 1
    char _pad_1CCE[0x2]; // offset 0x1CCE
    CUtlSymbolLarge m_strEncounterName; // offset 0x1CD0, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1CD8, size 0x8, align 8
    CHandle< CBaseEntity > m_hEffigy; // offset 0x1CE0, size 0x4, align 4
    int32 m_nDepth; // offset 0x1CE4, size 0x4, align 4
    CHandle< CDOTA_BaseNPC_Effigy_AghsFort > m_hPedestal; // offset 0x1CE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hParticleSystem; // offset 0x1CEC, size 0x4, align 4
    char _pad_1CF0[0x8]; // offset 0x1CF0
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1CF8, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1CFC, size 0x1, align 1
    char _pad_1CFD[0x3]; // offset 0x1CFD
    float32 m_flGoalCaptureProgress; // offset 0x1D00, size 0x4, align 4
    char _pad_1D04[0x4]; // offset 0x1D04
};
