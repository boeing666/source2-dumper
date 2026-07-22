#pragma once

class CConcreteAnimParameter : public CAnimParameterBase /*0x0*/  // sizeof 0x80, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    AnimParamButton_t m_previewButton; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName
    AnimParamNetworkSetting m_eNetworkSetting; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseMostRecentValue; // offset 0x78, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAutoReset; // offset 0x79, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bGameWritable; // offset 0x7A, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    bool m_bGraphWritable; // offset 0x7B, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAttrStateCallback
    char _pad_007C[0x4]; // offset 0x7C
};
