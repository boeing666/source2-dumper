#pragma once

class CSmartPropFilter_SurfaceAngle : public CSmartPropFilter /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeFloat m_flSurfaceSlopeMin; // offset 0x50, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flSurfaceSlopeMax; // offset 0x90, size 0x40, align 8 | MPropertyDescription
};
