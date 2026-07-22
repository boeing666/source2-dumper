#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1A20, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1A24, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1A28, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1A2C, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1A38, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1A3C, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1A40, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1A41, size 0x1, align 1
    char _pad_1A42[0x6]; // offset 0x1A42
    CUtlSymbolLarge m_strEncounterName; // offset 0x1A48, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1A50, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEffigy; // offset 0x1A58, size 0x4, align 4
    float32 m_flYaw; // offset 0x1A5C, size 0x4, align 4
    float32 m_flStartTime; // offset 0x1A60, size 0x4, align 4
    GameTime_t m_flCursorEnterTime; // offset 0x1A64, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x1B]; // offset 0x1A69
    float32 m_flLastUpdateTime; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nChannellingParticle; // offset 0x1A88, size 0x4, align 255
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1A8C, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    float32 m_flGoalCaptureProgress; // offset 0x1A94, size 0x4, align 4
};
