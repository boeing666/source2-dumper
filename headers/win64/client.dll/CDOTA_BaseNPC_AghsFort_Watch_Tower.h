#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1A28, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1A2C, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1A30, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1A34, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1A40, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1A44, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1A48, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1A49, size 0x1, align 1
    char _pad_1A4A[0x6]; // offset 0x1A4A
    CUtlSymbolLarge m_strEncounterName; // offset 0x1A50, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1A58, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEffigy; // offset 0x1A60, size 0x4, align 4
    float32 m_flYaw; // offset 0x1A64, size 0x4, align 4
    float32 m_flStartTime; // offset 0x1A68, size 0x4, align 4
    GameTime_t m_flCursorEnterTime; // offset 0x1A6C, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x1B]; // offset 0x1A71
    float32 m_flLastUpdateTime; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nChannellingParticle; // offset 0x1A90, size 0x4, align 255
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1A94, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x3]; // offset 0x1A99
    float32 m_flGoalCaptureProgress; // offset 0x1A9C, size 0x4, align 4
};
