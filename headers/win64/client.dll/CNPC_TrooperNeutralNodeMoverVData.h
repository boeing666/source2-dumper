#pragma once

class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0xF18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    bool m_bEnableMovementToNodes; // offset 0xEF0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0EF1[0x3]; // offset 0xEF1
    CRangeFloat m_flExposedDuration; // offset 0xEF4, size 0x8, align 255
    CRangeFloat m_flHideDuration; // offset 0xEFC, size 0x8, align 255
    char _pad_0F04[0x4]; // offset 0xF04
    CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // offset 0xF08, size 0x10, align 8
};
