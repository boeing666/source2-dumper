#pragma once

class CSmartPropOperation_TraceInDirection : public CSmartPropOperation_Trace /*0x0*/  // sizeof 0x410, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x350]; // offset 0x0
    CSmartPropAttributeVector m_vTraceDirection; // offset 0x350, size 0x40, align 8 | MPropertyStartGroup
    CSmartPropAttributeCoordinateSpace m_DirectionSpace; // offset 0x390, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeFloat m_flTraceLength; // offset 0x3D0, size 0x40, align 8 | MPropertyDescription
};
