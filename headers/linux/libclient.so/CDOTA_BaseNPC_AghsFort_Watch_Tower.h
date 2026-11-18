#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1DB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D3C]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1D3C, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1D40, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1D44, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1D48, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1D54, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1D58, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1D5C, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1D5D, size 0x1, align 1
    char _pad_1D5E[0x2]; // offset 0x1D5E
    CUtlSymbolLarge m_strEncounterName; // offset 0x1D60, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1D68, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEffigy; // offset 0x1D70, size 0x4, align 4
    float32 m_flYaw; // offset 0x1D74, size 0x4, align 4
    float32 m_flStartTime; // offset 0x1D78, size 0x4, align 4
    GameTime_t m_flCursorEnterTime; // offset 0x1D7C, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0x1D80, size 0x1, align 1
    char _pad_1D81[0x1B]; // offset 0x1D81
    float32 m_flLastUpdateTime; // offset 0x1D9C, size 0x4, align 4
    ParticleIndex_t m_nChannellingParticle; // offset 0x1DA0, size 0x4, align 255
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1DA4, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1DA8, size 0x1, align 1
    char _pad_1DA9[0x3]; // offset 0x1DA9
    float32 m_flGoalCaptureProgress; // offset 0x1DAC, size 0x4, align 4
};
