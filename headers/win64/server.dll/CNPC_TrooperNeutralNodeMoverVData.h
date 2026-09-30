#pragma once

class CNPC_TrooperNeutralNodeMoverVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0xF38, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xF10]; // offset 0x0
    bool m_bEnableMovementToNodes; // offset 0xF10, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0F11[0x3]; // offset 0xF11
    CRangeFloat m_flExposedDuration; // offset 0xF14, size 0x8, align 255
    CRangeFloat m_flHideDuration; // offset 0xF1C, size 0x8, align 255
    char _pad_0F24[0x4]; // offset 0xF24
    CEmbeddedSubclass< CCitadelModifier > m_HidingModifier; // offset 0xF28, size 0x10, align 8
};
