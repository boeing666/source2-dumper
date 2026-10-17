#pragma once

class CSmartPropOperation_Trace : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x350, align 0xFF [vtable abstract] (smartprops) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeVector m_Origin; // offset 0x50, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_OriginSpace; // offset 0x90, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeFloat m_flOriginOffset; // offset 0xD0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flSurfaceUpInfluence; // offset 0x110, size 0x40, align 8 | MPropertyStartGroup MPropertySortPriority MPropertyDescription
    CSmartPropAttributeTraceNoHit m_nNoHitResult; // offset 0x150, size 0x40, align 255 | MPropertySortPriority MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreToolMaterials; // offset 0x190, size 0x40, align 8 | MPropertyStartGroup MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreSky; // offset 0x1D0, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreNoDraw; // offset 0x210, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreTranslucent; // offset 0x250, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreModels; // offset 0x290, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreEntities; // offset 0x2D0, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
    CSmartPropAttributeBool m_bIgnoreCables; // offset 0x310, size 0x40, align 8 | MPropertySortPriority MPropertyDescription
};
