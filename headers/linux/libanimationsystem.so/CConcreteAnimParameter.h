#pragma once

class CConcreteAnimParameter : public CAnimParameterBase /*0x0*/  // sizeof 0x78, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x6C]; // offset 0x0
    AnimParamButton_t m_previewButton; // offset 0x6C, size 0x4, align 4 | MPropertyFriendlyName
    AnimParamNetworkSetting m_eNetworkSetting; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseMostRecentValue; // offset 0x74, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAutoReset; // offset 0x75, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGameWritable; // offset 0x76, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bGraphWritable; // offset 0x77, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
};
