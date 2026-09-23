#pragma once

class CSmartPropOperation_TraceToPoint : public CSmartPropOperation_Trace /*0x0*/  // sizeof 0x450, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup MVDataExperimentalNodeSet}
{
public:
    char _pad_0000[0x350]; // offset 0x0
    CSmartPropAttributeVector m_TargetPoint; // offset 0x350, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_TargetPointSpace; // offset 0x390, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeBool m_bTraceAway; // offset 0x3D0, size 0x40, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flTraceLength; // offset 0x410, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyDescription
};
