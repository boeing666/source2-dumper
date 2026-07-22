#pragma once

class SNewSettingsDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    NewSettingsID_t nID; // offset 0x0, size 0x4, align 255 | MPropertyDescription MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0004[0xC]; // offset 0x4
    CUtlString m_sTitle; // offset 0x10, size 0x8, align 8
    CUtlString m_sDescription; // offset 0x18, size 0x8, align 8
    CPanoramaImageName sIcon; // offset 0x20, size 0x10, align 8
    CUtlString m_sCreationDate; // offset 0x30, size 0x8, align 8
    char _pad_0038[0x4]; // offset 0x38
    ENewSettingsBadge m_eNewSettingsBadge; // offset 0x3C, size 0x4, align 4
};
