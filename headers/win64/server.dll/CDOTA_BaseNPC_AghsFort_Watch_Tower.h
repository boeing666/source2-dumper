#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19D0]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x19D0, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x19D4, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x19D8, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x19DC, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x19E8, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x19EC, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x19F0, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x19F1, size 0x1, align 1
    char _pad_19F2[0x6]; // offset 0x19F2
    CUtlSymbolLarge m_strEncounterName; // offset 0x19F8, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1A00, size 0x8, align 8
    CHandle< CBaseEntity > m_hEffigy; // offset 0x1A08, size 0x4, align 4
    int32 m_nDepth; // offset 0x1A0C, size 0x4, align 4
    CHandle< CDOTA_BaseNPC_Effigy_AghsFort > m_hPedestal; // offset 0x1A10, size 0x4, align 4
    CHandle< CBaseEntity > m_hParticleSystem; // offset 0x1A14, size 0x4, align 4
    char _pad_1A18[0x8]; // offset 0x1A18
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1A20, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1A24, size 0x1, align 1
    char _pad_1A25[0x3]; // offset 0x1A25
    float32 m_flGoalCaptureProgress; // offset 0x1A28, size 0x4, align 4
    char _pad_1A2C[0x4]; // offset 0x1A2C
};
