#pragma once

class CMovementComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x100, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlVector< CSmartPtr< CAnimGraphDoc_Motor > > m_motors; // offset 0x38, size 0x18, align 8 | MPropertySuppressField
    bool m_bNetworkPath; // offset 0x50, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0051[0x7]; // offset 0x51
    CAnimInputDamping m_facingDamping; // offset 0x58, size 0x18, align 8 | MPropertyGroupName MPropertyFriendlyName
    bool m_bNetworkFacing; // offset 0x70, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName
    char _pad_0071[0x3]; // offset 0x71
    AnimParamID[34] m_paramIDs; // offset 0x74, size 0x88, align 4 | MPropertySuppressField
    char _pad_00FC[0x4]; // offset 0xFC
};
