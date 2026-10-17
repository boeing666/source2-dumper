#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B28]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1B28, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1B2C, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1B30, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1B34, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1B40, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1B44, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1B48, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1B49, size 0x1, align 1
    char _pad_1B4A[0x6]; // offset 0x1B4A
    CUtlSymbolLarge m_strEncounterName; // offset 0x1B50, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1B58, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEffigy; // offset 0x1B60, size 0x4, align 4
    float32 m_flYaw; // offset 0x1B64, size 0x4, align 4
    float32 m_flStartTime; // offset 0x1B68, size 0x4, align 4
    GameTime_t m_flCursorEnterTime; // offset 0x1B6C, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x1B]; // offset 0x1B71
    float32 m_flLastUpdateTime; // offset 0x1B8C, size 0x4, align 4
    ParticleIndex_t m_nChannellingParticle; // offset 0x1B90, size 0x4, align 255
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1B94, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1B98, size 0x1, align 1
    char _pad_1B99[0x3]; // offset 0x1B99
    float32 m_flGoalCaptureProgress; // offset 0x1B9C, size 0x4, align 4
};
