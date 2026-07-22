#pragma once

class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16C0]; // offset 0x0
    bool m_bEnableMovementToNodes; // offset 0x16C0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_16C1[0x3]; // offset 0x16C1
    CRangeFloat m_flExposedDuration; // offset 0x16C4, size 0x8, align 255
    CRangeFloat m_flHideDuration; // offset 0x16CC, size 0x8, align 255
    char _pad_16D4[0x4]; // offset 0x16D4
    CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // offset 0x16D8, size 0x10, align 8
};
