#pragma once

class CDOTA_BaseNPC_AghsFort_Watch_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1C20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BAC]; // offset 0x0
    int32 m_nOptionNumber; // offset 0x1BAC, size 0x4, align 4
    float32 m_flMovePlayersRadius; // offset 0x1BB0, size 0x4, align 4
    CDOTA_BaseNPC_AghsFort_Watch_Tower::ExitDirection_t m_nExitDirection; // offset 0x1BB4, size 0x4, align 4
    Vector m_vExitLocation; // offset 0x1BB8, size 0xC, align 4
    int32 m_nPathSelectedID; // offset 0x1BC4, size 0x4, align 4
    int32 m_nEncounterType; // offset 0x1BC8, size 0x4, align 4
    bool m_bIsEliteEncounter; // offset 0x1BCC, size 0x1, align 1
    bool m_bIsAscensionLevelPicker; // offset 0x1BCD, size 0x1, align 1
    char _pad_1BCE[0x2]; // offset 0x1BCE
    CUtlSymbolLarge m_strEncounterName; // offset 0x1BD0, size 0x8, align 8
    CUtlSymbolLarge m_strAscensionAbilities; // offset 0x1BD8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEffigy; // offset 0x1BE0, size 0x4, align 4
    float32 m_flYaw; // offset 0x1BE4, size 0x4, align 4
    float32 m_flStartTime; // offset 0x1BE8, size 0x4, align 4
    GameTime_t m_flCursorEnterTime; // offset 0x1BEC, size 0x4, align 255
    bool m_bShowingTooltip; // offset 0x1BF0, size 0x1, align 1
    char _pad_1BF1[0x1B]; // offset 0x1BF1
    float32 m_flLastUpdateTime; // offset 0x1C0C, size 0x4, align 4
    ParticleIndex_t m_nChannellingParticle; // offset 0x1C10, size 0x4, align 255
    CHandle< CBaseAnimatingActivity > m_hRoomGate; // offset 0x1C14, size 0x4, align 4
    bool m_bIsBeingChanneled; // offset 0x1C18, size 0x1, align 1
    char _pad_1C19[0x3]; // offset 0x1C19
    float32 m_flGoalCaptureProgress; // offset 0x1C1C, size 0x4, align 4
};
