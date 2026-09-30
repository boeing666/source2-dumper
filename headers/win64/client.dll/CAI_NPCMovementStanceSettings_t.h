#pragma once

struct CAI_NPCMovementStanceSettings_t  // sizeof 0x2C8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CAI_MovementGaitSettings m_slow; // offset 0x0, size 0xB0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_medium; // offset 0xB0, size 0xB0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_fast; // offset 0x160, size 0xB0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_veryFast; // offset 0x210, size 0xB0, align 8 | MPropertySuppressExpr
    bool m_bEnabled; // offset 0x2C0, size 0x1, align 1 | MPropertyFlattenIntoParentRow
    char _pad_02C1[0x7]; // offset 0x2C1
};
