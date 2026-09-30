#pragma once

class CAI_NPCMovementSettingsVData  // sizeof 0x888, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataOverlayType}
{
public:
    CAI_MovementGaitSettings m_slow; // offset 0x0, size 0xB0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_medium; // offset 0xB0, size 0xB0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_fast; // offset 0x160, size 0xB0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_OptionalMovementGaitSettings m_veryFast; // offset 0x210, size 0xB0, align 8 | MPropertyAutoExpandSelf MPropertyGroupName
    CAI_NPCMovementStanceSettings_t m_crouchStance; // offset 0x2C0, size 0x2C8, align 8 | MPropertyAutoExpandSelf
    CAI_NPCMovementStanceSettings_t m_proneStance; // offset 0x588, size 0x2C8, align 8 | MPropertyAutoExpandSelf
    CUtlVector< AI_MovementPoseTransition_t > m_vecPoseTransitions; // offset 0x850, size 0x18, align 8
    AI_CommonMovementSettings_t m_commonSettings; // offset 0x868, size 0x1C, align 4
    char _pad_0884[0x4]; // offset 0x884
};
