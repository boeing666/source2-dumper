#pragma once

class CDOTAOverworldFortuneTellerStoryNode  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldFortuneTellerStoryNodeID_t m_unID; // offset 0x0, size 0x1, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0001[0x3]; // offset 0x1
    int32 m_nFortuneRequestCount; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sDialogueName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sRewardEventAction; // offset 0x10, size 0x8, align 8 | MPropertyDescription
};
