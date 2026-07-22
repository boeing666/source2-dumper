#pragma once

class CMixSubgraphSwitch : public CMixPropertyBase /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    bool bUseDetailedPlugNames; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x7]; // offset 0x21
    CSelectableSubgraph defaultSubgraph; // offset 0x28, size 0x18, align 8 | MPropertyFriendlyName
    VMixSubgraphSwitchInterpolationType_t interpolationMode; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    bool bOnlyTailsOnFadeOut; // offset 0x44, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0045[0x3]; // offset 0x45
    float32 flTransitionTime; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    int32 nChannels; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CUtlVector< CSelectableSubgraph > subgraphs; // offset 0x50, size 0x18, align 8
};
