#pragma once

class CDOTAOverworldPath  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldPathID_t m_unID; // offset 0x0, size 0x2, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    OverworldNodeID_t m_unNodeStart; // offset 0x2, size 0x2, align 255 | MPropertyDescription
    OverworldNodeID_t m_unNodeEnd; // offset 0x4, size 0x2, align 255 | MPropertyDescription
    char _pad_0006[0x2]; // offset 0x6
    CUtlString m_strPathHiddenUntilEventAction; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    uint8 m_unCost; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x1F]; // offset 0x11
    OverworldSplineInfo_t m_splineInfo; // offset 0x30, size 0x10, align 4
    float32 m_flCurveAngle; // offset 0x40, size 0x4, align 4 | MPropertyAttributeRange
    char _pad_0044[0x4]; // offset 0x44
    CUtlVector< CUtlString > m_vecRequiredTokenNames; // offset 0x48, size 0x18, align 8 | MPropertyDescription
};
