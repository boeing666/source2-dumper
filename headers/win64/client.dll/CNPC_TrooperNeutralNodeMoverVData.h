#pragma once

class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0xF28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xF00]; // offset 0x0
    bool m_bEnableMovementToNodes; // offset 0xF00, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0F01[0x3]; // offset 0xF01
    CRangeFloat m_flExposedDuration; // offset 0xF04, size 0x8, align 255
    CRangeFloat m_flHideDuration; // offset 0xF0C, size 0x8, align 255
    char _pad_0F14[0x4]; // offset 0xF14
    CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // offset 0xF18, size 0x10, align 8
};
