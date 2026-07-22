#pragma once

class CSosGroupActionSoundeventClusterSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nMinNearby; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flClusterEpsilon; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_shouldPlayOpvar; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_shouldPlayClusterChild; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_clusterSizeOpvar; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_groupBoundingBoxMinsOpvar; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_groupBoundingBoxMaxsOpvar; // offset 0x30, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0038[0x18]; // offset 0x38
};
