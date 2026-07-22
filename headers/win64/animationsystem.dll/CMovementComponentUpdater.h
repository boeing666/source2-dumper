#pragma once

class CMovementComponentUpdater : public CAnimComponentUpdater /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // offset 0x30, size 0x18, align 8
    CAnimInputDamping m_facingDamping; // offset 0x48, size 0x18, align 8
    char _pad_0060[0x8]; // offset 0x60
    int32 m_nDefaultMotorIndex; // offset 0x68, size 0x4, align 4
    float32 m_flDefaultRunSpeed; // offset 0x6C, size 0x4, align 4
    bool m_bMoveVarsDisabled; // offset 0x70, size 0x1, align 1
    bool m_bNetworkPath; // offset 0x71, size 0x1, align 1
    bool m_bNetworkFacing; // offset 0x72, size 0x1, align 1
    CAnimParamHandle[34] m_paramHandles; // offset 0x73, size 0x44, align 1
    char _pad_00B7[0x1]; // offset 0xB7
};
