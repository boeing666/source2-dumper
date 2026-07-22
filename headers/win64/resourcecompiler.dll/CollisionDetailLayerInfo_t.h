#pragma once

struct CollisionDetailLayerInfo_t  // sizeof 0x40, align 0x8 (physicslib) {MGetKV3ClassDefaults MVDataRoot MVDataOutlinerLeafNameFn}
{
    CUtlString m_sDescription; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlString m_sFriendlyName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    bool m_bIsQueryOnly; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x7]; // offset 0x11
    CUtlString m_sParentDetailLayer; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    CUtlVector< CollisionDetailLayerInfo_t::Name_t > m_vecSubtreeDetailLayers; // offset 0x20, size 0x18, align 8 | MPropertySuppressField
    bool m_bNotPickable; // offset 0x38, size 0x1, align 1 | MPropertySuppressField
    char _pad_0039[0x7]; // offset 0x39
};
