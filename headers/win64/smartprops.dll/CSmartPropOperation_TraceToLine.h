#pragma once

class CSmartPropOperation_TraceToLine : public CSmartPropOperation_Trace /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup MVDataExperimentalNodeSet}
{
public:
    char _pad_0000[0x350]; // offset 0x0
    CSmartPropAttributeVector m_EndPointA; // offset 0x350, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_EndPointSpaceA; // offset 0x390, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeVector m_EndPointB; // offset 0x3D0, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_EndPointSpaceB; // offset 0x410, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeBool m_bTraceAway; // offset 0x450, size 0x40, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flTraceLength; // offset 0x490, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyDescription
};
