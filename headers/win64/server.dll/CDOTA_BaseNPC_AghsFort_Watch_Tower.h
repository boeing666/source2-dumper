#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1AC0, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1AC4, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1AC8, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1ACC, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1AD8, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1ADC, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1AE0, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1AE1, size 0x1, align 1
    char _pad_1AE2[0x6]; // offset 0x1AE2
    CUtlSymbolLarge m_strEncounterName; // offset 0x1AE8, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1AF0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEffigy; // offset 0x1AF8, size 0x4, align 4
    int32 m_nDepth; // offset 0x1AFC, size 0x4, align 4
    CHandle< CDOTA_BaseNPC_Effigy_AghsFort > m_hPedestal; // offset 0x1B00, size 0x4, align 4
    CHandle< CBaseEntity > m_hParticleSystem; // offset 0x1B04, size 0x4, align 4
    char _pad_1B08[0x8]; // offset 0x1B08
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1B10, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    float32 m_flGoalCaptureProgress; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
