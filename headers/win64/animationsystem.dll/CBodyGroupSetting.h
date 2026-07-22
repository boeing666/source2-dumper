#pragma once

class CBodyGroupSetting  // sizeof 0x10, align 0x8 (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_BodyGroupName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoRebuildOnChange
    int32 m_nBodyGroupOption; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_000C[0x4]; // offset 0xC
};
