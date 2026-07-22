#pragma once

class CAI_NPCMovementSettingsVData  // sizeof 0x950, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType}
{
public:
    CAI_MovementGaitSettings m_slow; // offset 0x0, size 0xC0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_medium; // offset 0xC0, size 0xC0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_fast; // offset 0x180, size 0xC0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_veryFast; // offset 0x240, size 0xC0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_NPCMovementStanceSettings_t m_crouchStance; // offset 0x300, size 0x308, align 8 | MPropertyAutoExpandSelf
    CAI_NPCMovementStanceSettings_t m_proneStance; // offset 0x608, size 0x308, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CAI_CustomMovementGaitSettings > m_customGaits; // offset 0x910, size 0x18, align 8
    AI_CommonMovementSettings_t m_commonSettings; // offset 0x928, size 0x24, align 4
    char _pad_094C[0x4]; // offset 0x94C
};
