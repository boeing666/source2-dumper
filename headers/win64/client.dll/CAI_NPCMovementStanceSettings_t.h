#pragma once

struct CAI_NPCMovementStanceSettings_t  // sizeof 0x308, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CAI_MovementGaitSettings m_slow; // offset 0x0, size 0xC0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_medium; // offset 0xC0, size 0xC0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_fast; // offset 0x180, size 0xC0, align 8 | MPropertySuppressExpr
    CAI_OptionalMovementGaitSettings m_veryFast; // offset 0x240, size 0xC0, align 8 | MPropertySuppressExpr
    bool m_bEnabled; // offset 0x300, size 0x1, align 1 | MPropertyFlattenIntoParentRow
    char _pad_0301[0x7]; // offset 0x301
};
