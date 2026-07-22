#pragma once

class CAI_CustomMovementGaitSettings : public CAI_OptionalMovementGaitSettings /*0x0*/  // sizeof 0xC8, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CGlobalSymbol m_sGaitId; // offset 0xC0, size 0x8, align 8 | MPropertyFlattenIntoParentRow
};
